#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		set<int, greater<int> > s;
		int arr[4];
		for(int i=0; i<4; i++)
		{
			int n;
			cin>>n;
			arr[i] = n;
			s.insert(n);
		}

		if(s.size() == 4 || s.size() == 3)
		{
			cout<<2<<endl;
		}
		else if(s.size() == 2)
		{
			sort(arr, arr+4);
			if(arr[0]==arr[1] && arr[2]==arr[3])
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<1<<endl;
			}
		}
		else
		{
			cout<<0<<endl;
		}
	}
}