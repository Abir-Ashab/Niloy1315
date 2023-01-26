#include<bits/stdc++.h>
using namespace std;

int fib(long long n, int mod) {
  assert (n >= 0);
  if (n <= 1) return n;
  int a = 0, b = 1;
  long long i = 1ll << (63 - __builtin_clzll(n) - 1);
  for (; i; i >>= 1) {
    int na = (a *(long long) a + b *(long long) b) % mod;
    int nb = (2ll * a + b) * b % mod;
    a = na; b = nb;
    if (n & i) {
      int c = a + b; if (c >= mod) c -= mod;
      a = b; b = c;
    }
  }
  return b;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int nthfib,mod;
  cin >> nthfib >> mod;
  cout << fib(nthfib, mod) << '\n';
  return 0;
}
//fib sequence---> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,
// 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811