#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
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
#define MAX 10000000
bitset<MAX> b;

vector<ll>primes;
void gen_primes()
{
	b.set();
	b[0]=0;
	b[1]=0;
	for(ll i=2;i*i<MAX;i++)
	{
		if(b[i])
		{
			for(ll j=i;j*i<MAX;j++)
			{
				b[i*j]=0;
			}
		}
	}
	for(ll i=2;i<MAX;i++)
	{
		if(b[i])
		{
			primes.pb(i);
		}
	}
}

int main()
{
    c_p_c();
    gen_primes();
    for(ll i=0;i<100;i++)
    {
    	cout<<primes[i]<<" ";
    }
    return 0;
}