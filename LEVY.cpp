#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll gcd(ll a,  ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
bitset<10001>prime;
void sieve()
{
	prime.set();
	prime[0] = prime[1] = 0;
	for (int p = 2; p * p <= 10000; p++)
	{
		if (prime[p])
		{
			for (int i = p * p; i <= 10000; i += p)
				prime[i] = 0;
		}
	}
}
int main()
{
	ll t, n, i, j, k, l, a, b, c,  x,  y, d, q;
	sieve();
	vector<int>primes;
	for (i = 0; i <= 10000; i++)
	{
		if (prime[i] == 1)
			primes.push_back(i);
	}
	//cout << primes[primes.size() - 1];
	unordered_map<int, int>h;
	for (i = 0; i < primes.size() ; i++)
	{
		for (j = 0; j < primes.size(); j++)
		{
			int temp = 2 * primes[j] + primes[i];
			h[temp]++;
		}
	}
	//cout << primes.size();
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (h.find(n) != h.end())
			cout << h[n] << "\n";
		else cout << "0\n";

	}
}