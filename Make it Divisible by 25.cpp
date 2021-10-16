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
//------------------------------------------------------------------------------------------------------------//

// ll A[1000] , B[1000] ;

void solveA()
{
	int a, b, c ;
	cin >> a >> b  >> c ;
	int votes  = max(max(a, b), c);

	ll ans  =  (a == votes) + (b == votes) + (c == votes);

	if (a == votes && ans == 1)
		cout << "0 ";
	else
		cout << votes - a + 1 << " ";


	if (b == votes && ans == 1)
		cout << "0 ";
	else
		cout << votes - b + 1 << " ";


	if (c == votes && ans == 1)
		cout << "0 \n";
	else
		cout << votes - c + 1 << endl ;
}


void solveB()
{
	string num ;
	cin >> num  ;
	int N = num.size() , x = N ;

	for (int i = N - 1; i >= 0; i--)
	{


		if (num[i] == '5')
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (num[j] == '2' or  num[j] == '7')
					x =  min(x , N - j - 2);
			}
		}


		if (num[i] == '0')
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (num[j] == '0' or  num[j] == '5')
					x = min(x , N - j - 2);
			}
		}

	}
	cout << x << endl;

}
int32_t main()
{
	pseudo() ;
	w(t)
	{
		solveB() ;
	}
	return 0 ;
}




// int n = S.length() ;
// int arr[n + 1];
// arr[0] = 1; arr[1] = 1;

// if (S[0] == '0')
// 	return 0;
// for (int i = 2; i <= n; i++)
// {
// 	dp[i] = 0;

// 	// If the last digit is not 0,
// 	if (S[i - 1] > '0')  dp[i] = dp[i - 1];

// 	if (S[i - 2] == '1' ||  (S[i - 2] == '2' && S[i - 1] < '7') ) dp[i] += dp[i - 2];
// }
// return dp[n];














 
