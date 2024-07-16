#include<bits/stdc++.h>
using namespace std;  
int main()
{
	int n,m;
	scanf("%d", &n);
	set<int> s1;
	for(int i=0; i<n; i++)
	{
		int x;
		scanf("%d", &x);
		s1.insert(x);
	}
	scanf("%d", &m);
	vector<int> v(s1.begin(), s1.end());
	for(int i=0; i<m; i++)
	{
		int x;
		scanf("%d", &x);
		int pos = upper_bound(v.begin(), v.end(), x) - v.begin();
		printf("%d\n",(int)v.size() - pos + 1);
	}
}