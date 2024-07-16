#include<bits/stdc++.h>
using namespace std;
int main()
{
	int lastanswer = 0;
	int N=0, Q=0;
	int type, x, y;
	int seq, pos;

	cin >> N >> Q;

	vector<vector<int> > a(N);
	for(int i=0; i<Q; i++)
	{
		cin>>type>>x>>y;
		seq = ((x ^ lastanswer)%N);
		if(type == 1)
		{
			a[seq].push_back(y);
		}
		else if(type == 2)
		{
			pos = (y % a[seq].size());
			lastanswer = a[seq][pos];
			cout<<lastanswer<<endl;
		}
	}
}