#include<bits/stdc++.h> 
using namespace std;
int const mod = 1000003;
typedef long long ll;
ll Factorial[mod];

void factorial() {
    Factorial[0] = 1; 
    for(ll i = 1; i < mod; i++) {
       Factorial[i] = (((i % mod) * (Factorial[i-1] % mod)) % mod);
    }
}

ll bigmod (ll a, ll p) { 
    ll res = 1; 
    ll x = a; 
    while ( p ) { 
        if ( p & 1 ) { 
            res = ( res * x ) % mod;
        }
        x = ( x * x ) % mod;
        p = p >> 1; 
    }
    return res;
}

ll nCr(ll n, ll r) {
    ll x = ((Factorial[n-r] % mod) * (Factorial[r] % mod)) % mod;

    ll y = bigmod(x, mod - 2);

    ll z = ((Factorial[n] % mod) * (y % mod)) % mod;
    return z;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test; cin >> test; ll k = 1;
    factorial();
    while(test--) {
        ll n,r;
        cin >> n >> r;
        ll z = nCr(n, r);
        cout << "Case " << k << ": " << z << '\n';
        k++;
    }
    return 0;
}