#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int b_arr[n], g_arr[n], t_arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>b_arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>g_arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				t_arr[i] = b_arr[i] + g_arr[i];
			}
		}
		int maximum = *max_element(t_arr, t_arr + n);
		cout<<maximum<<"\n";
	}
}