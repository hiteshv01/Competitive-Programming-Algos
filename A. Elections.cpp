#include<bits/stdc++.h>
using namespace std;
#define   int              long long
#define   f(a,b,n)         for(ll a=b;a<n;a++)
#define   readarr(arr,n)   f(i,0,n) cin>>arr[i];
#define   ll              long long
#define   lli             long long int
#define   pb              push_back
#define   go              ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define   ms(a,i)         memset(a,i,sizeof(a))
#define   mod             1000000007          //1e9+7 ans%mod
#define   w(t)            int t ; cin>>t; while(t--)
#define   MOD             1e9+7
#define   setbits(x)      __builtin_popcountll(x)
#define   zrobits(x)      __builtin_ctzll(x)
#define   gcd(x,y)          __gcd(x,y)
#define   vi              vector<int>
#define   vvi             vector<vector<int>>
#define   mp              map<int,int>
#define   pi              pair<int,int>
#define   si              set<int>
#define   INF             1e18
#define   ff              first
#define   ss              second
#define   ps(x,y)         fixed <<setprecision(y)<<x
#define   yes             cout <<"YES" << endl
#define   no              cout <<"NO" << endl
#define   impossible      cout << -1 << endl
#define   endl             "\n"

void pseudo()
{
	go;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

long long hcf(long long a, long long b)
{
	if (b == 0) return a;
	a %= b;
	return hcf(b, a);
}

long long lcm(long long a, long long b)
{
	return (a * b) / hcf(a, b);
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// ll A[1000] , B[1000] ;

void solveA()
{
	int  a, b, c;
	cin >> a >> b >> c;
	map<int, int> hash ;
	hash[a]++; hash[b]++; hash[c]++;
	int  v = max(a, max(b, c)) ;
	if (a == v && hash[a] == 1)
		cout << 0 << " ";
	else if (a == v  && hash[a] > 1)
		cout << 1 << " ";
	else if (a != v)
		cout << (v + 1) - a << " ";

	if (b == v && hash[b] == 1)
		cout << 0 << " ";
	else if (b == v && hash[b] > 1)
		cout << 1 << " ";
	else if (b != v)
		cout << (v + 1) - b << " ";
	if (c == v && hash[c] == 1)
		cout << 0 << " ";
	else if (c == v && hash[c] > 1)
		cout << 1 << " ";
	else if (c != v)
		cout << (v + 1) - c << " ";

	cout << endl ;
}


int32_t main()
{
	pseudo() ;
	w(t)
	{
		solveA() ;
	}
	return 0 ;
}


