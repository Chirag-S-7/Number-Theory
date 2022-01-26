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

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define MAX 		10000000
vi sieve(MAX);
vi primes;
void gen_prime_spf()  
{
	
	for(ll k=0;k<MAX;k++)
	{
		sieve[k]=k;
	}
	for(ll i=2;i<MAX;i++)
	{
		if(sieve[i]==i)
		{
			primes.pb(i);
		}
		for(ll j=0; j<primes.size() && primes[j]<=sieve[i] && primes[j]*i<MAX;j++)
		{
			sieve[i*primes[j]]=primes[j];
		}
	}
}
// vi factors;
// void gen_factors(ll n)
// {
// 	gen_prime_spf();

	
// 	factors.pb(n);
// 	while(sieve[n]!=1)
// 	{
// 		ll x=sieve[n];
// 		n/=x;
// 		factors.pb(n);
// 	}
	
// }
int main()
{
    c_p_c();
    // ll n;
    // cin>>n;
    // gen_factors(n);
    // reverse(factors.begin(),factors.end());
    // for(ll i=0;i<factors.size();i++)
    // {
    // 	cout<<factors[i]<<" ";
    // }
    return 0;
}