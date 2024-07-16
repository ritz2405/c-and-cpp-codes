#include<bits/stdc++.h>
#define ll long long
using namespace std;

void ConcatSort()
{
	long long len;
	cin>>len;
	long long a[len];
	for(int i=0; i<len; i++)
	{
		cin>>a[i];
	}
	long long iup = -1, elp=-1;
	for(int i=0; i<len-1; i++)
	{
		if(a[i] > a[i+1])
		{
			iup = i+1;
			elp = a[iup];
			break;
		}
	}
	if(iup==-1 || iup==len-1)
	{
		cout<<"YES"<<"\n";
		return;
	}
	long long lefts;
	for(int i=0; i<iup; i++)
	{
		if(a[i] > elp)
		{
			lefts = a[i];
			break;
		}
	}
	bool Yes = true;
	long long rights = a[iup-1];
	for(int i=iup+1;i<len; i++)
	{
		if(a[i] >= rights)
		{
			rights = a[i];
		}
		else if(a[i]<=lefts && a[i] >= elp)
		{
			elp = a[i];
		}
		else
		{
			cout<<"NO"<<"\n";
			return;
		}
	}
	cout<<"YES"<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ConcatSort();
	}
}