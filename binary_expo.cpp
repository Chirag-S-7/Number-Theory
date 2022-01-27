#include<bits/stdc++.h>
using namespace std;
 //log(b)
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define mii             map<ll,ll>
#define mod             1000000007
#define inf             1e18

ll binary_expo(ll a,ll b)
{
	if(b==0)
	{
		return 1;
	}
	ll res=binary_expo(a,b/2);
	if(b%2==0)
	{
		return ((res%mod)*(res%mod))%mod;
	}
	else
	{
		return ((res%mod)*(res%mod)*(a%mod))%mod;
	}
}
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
    c_p_c();
    ll a,b;
    cin>>a>>b;
    cout<<binary_expo(a,b);;
    return 0;
}