#include<bits/stdc++.h>
using namespace std;
 
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
//Time Complexity log(min(a,b))
ll euclid_gcd(ll a,ll b)
{
	if(b==0)
	{
		return a;
	}
	if(b>a)
	{
		return euclid_gcd(b,a);
	}
	else
	{
		return euclid_gcd(b,a%b);
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
    cout<<euclid_gcd(a,b);
    return 0;
}