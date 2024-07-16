#include<bits/stdc++.h>
using namespace std;
float allround(float time)
{
	float value = int(time * 100 + 0.5);
	return float(value) / 100; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float k1,k2,k3,v, v2=9.58;
		cin>>k1>>k2>>k3>>v;
		float time;
		time = 100/(k1*k2*k3*v);
		if(allround(time) < v2)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}