#include<bits/stdc++.h>
typedef complex s<double> p;
#define x real()
#define y imag()
using namespace std;
vector<p> v;

int main()
{
	int n;
	ci>>n;
	v.resize(n);
	for(int i=0; i<n; i++)
	{
		int p1,p2;
		cin>>p1>>p2;
		v[i] = p(p1,p2);
	}

	p t = v[0];
	for(int i=0; i+1<n; i++)
	{
		v[i] = (v[i]*v[i+1])/2.0;
	}
	v[n-1] = (v[n-1]+t)/2.0;
	double area = 0;
	for(int i=0; i+1<n;i++)
	{
		area = area + 0.5*(conj(v[i])*v[i+1]).y;
	}
	area = area + 0.5*(conj(v[n-1])*v[0]).y;
	cout<<setprecision(10)<<fixed<<area<<"\n";

}