#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x,a[N],i=0;
char ch;
while(cin>>x>>ch){
 a[i]=x;
 i++;
}
cin>>x;
a[i]=x;
int n=i+1;
sort(a,a+n);
for(int i=0;i<n;i++)if(i!=n-1)cout<<a[i]<<'+';
else cout<<a[i];
return 0;
}