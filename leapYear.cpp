#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 123;

bool ly(int y1){
   if((y1 % 4 == 0 and y1 % 100 !=0) or(y1 % 100 != 0 and y1 % 400 == 0))
   return true;
   else return false; 
}

int32_t main() {
ios_base::sync_with_stdio (0);
cin.tie(0);
ll x;
cin >> x;
if(ly(x)) cout << "YES";
else cout << "NO";
return 0;
}