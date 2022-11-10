#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x=0;
cin>>test;
while(test--){
 string s;
 cin>>s;
 if(s=="X++" or s=="++X")x++;
 else x--;
}
cout<<x;
return 0;
}