#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x,a=0,b=0;

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>x;
        if(x==1){a=i;b=j;}
    }
}
//cout<<a<<' '<<b;
cout<<abs(3-a)+abs(3-b)<<endl;
return 0;
}