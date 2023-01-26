#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 123;
 
int32_t main() {
ios_base::sync_with_stdio (0);
cin.tie(0);
ll test;
cin >> test;
ll cnt = 0;
while(test--) {
     ll n;
     cin >> n;
     if (n == 1) cout << "1\n";
     else if (n == 2) cout << "-1\n";
     else {
     int cnt = 0;
     for (int i = 1; i <= n * n; i += 2) {
      cnt++;
      cout << i << " ";
      if (cnt % n == 0) cout << "\n";
     }
     for (int i = 2; i <= n * n; i += 2) {
      cout << i << " ";
      cnt++;
      if (cnt % n == 0) cout << "\n";
     }
  }
}
return 0;
}
// We will consider cells of a square matrix n×n as adjacent if they have a common side,
// that is, for cell (r,c) cells (r,c−1), (r,c+1), (r−1,c) and (r+1,c) are adjacent to it.