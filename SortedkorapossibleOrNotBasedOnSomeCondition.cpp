#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
       ios_base::sync_with_stdio(0);
       cin.tie(0);
       ll test, x;
       cin >> test;
       ll cnt = 0;
       while(test--) {
          cin >> x;
          int a[x+1];
          for(int i = 0; i < x; ++i) cin >> a[i];
          if(a[0] == 1) cout << "YES\n";
          else cout << "NO\n";
       }
       return 0;
}
// You are given a permutation a1,a2,…,an of size n, 
// where each integer from 1 to n appears exactly once.
// You can do the following operation any number of times (possibly, zero):

// 1)Choose any three indices i,j,k (1≤i<j<k≤n).
// 2)If ai>ak, replace ai with ai+aj. Otherwise, swap aj and ak.


// Determine whether you can make the array a sorted in non-descending order.