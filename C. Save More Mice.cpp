// Problem: C. Save More Mice
// Contest: Codeforces - Codeforces Round #748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll t;cin>>t;
	while(t--){
		ll k,n;
		cin>>k>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		int sum=0;
		int mouse=0;
		for(int i=n-1;i>=0;i--)
		{
			if(v[i] > sum)
			{
				mouse++;
				sum+=k-v[i];
			} 
			else
			{
				break;
			}
		}
		cout<<mouse<<endl;
	}
}
