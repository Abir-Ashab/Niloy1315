#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x,j=0;
string s1,s2;
cin>>s1>>s2;
while (s1[j]){
		s1[j] =toupper(s1[j]);
        s2[j] =toupper(s2[j]);
		j++;
	}
if(s1>s2)cout<<1;
else if(s1<s2)cout<<-1;
else cout<<0;
return 0;
}