#include<bits/stdc++.h>
using namespace std;
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void solve()
{
	int n;
	cin>>n;

	int arr[n], idx1 = 0, idxN = 0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i] == 1)
		{
			idx1 = i;
		}
		else if(arr[i] == n)
		{
			idxN = i;
		}
	}
	int ab = idx1 + (n-1) - idxN;
	if(idx1 < idxN)
	{
		cout<<ab<<"\n";
	}
	else{
		cout<<ab-1<<"\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}