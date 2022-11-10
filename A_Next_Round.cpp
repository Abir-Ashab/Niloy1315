#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x,ct=0;
cin>>x>>test;
int a[x+1];
rep cin>>a[i];
rep if(a[i]>=a[test-1] and a[i]!=0)ct++;
cout<<ct;
return 0;
}