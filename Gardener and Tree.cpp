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
//-----------------------------------------------------------------------------------------------------------------//

void solve()
{
	ll n, k;
	cin >> n >> k;
	if (n == 1 ) {
		cout << "0\n" ;
		return ;
	}

	vector<int> graph[n + 1];
	vector<int> degree(n + 1, 0);
	for (int i = 0; i < n - 1; i++)
	{
		ll u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		degree[u]++;
		degree[v]++;
	}
	queue<int> Q ;
	for (int i = 0; i <= n; i++) {
		if (degree[i] == 1)
			Q.push(i);
	}

	vector<bool> mark(n + 1, false);
	vector<int>  XX ;
	while (!Q.empty()  and  k >= 1)
	{
		int  size = Q.size();
		for (int i = 0; i < size ; i++)
		{
			int x  = Q.front();
			Q.pop();
			XX.push_back(x);
			mark[x] = true;
			for (auto neigh : graph[x])
			{
				degree[neigh]--;
				if (degree[neigh] == 1 && mark[neigh] == false)
					Q.push(neigh);
			}
		}
		k--;
	}

	cout <<  n - XX.size() ;
  /// print the valid answer on the screen 

	cout << endl ;
}


///////////////////////////////////////////----MAIN CODE HERE----////////////////////////////////////////////////////

int32_t main()
{
	pseudo() ;
	w(t)
	{
		solve() ;
	}
	return 0 ;
}

