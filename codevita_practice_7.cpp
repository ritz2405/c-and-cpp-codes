#include<bits/stdc++.h>
using namespace std;

int pairs(int elementlst[], int n, int k)
{
	int count=0;
	for(int i=0; i<n; i++)
	{
		int a=elementlst[i];
		int id1=i;
		int id2=i;
		if(i==0)
		{
			while(elementlst[id2+1] == a)
			{
				id2=id2+1;
			}
			if(elementlst[id2+1]<= a+k && elementlst[id2+1]>= a-k)
			{
				count+=1;
			}
		}
		else if(i<n-1)
		{
			while(elementlst[id2+1]==a)
			{
				id2+=1;
			}
			while(elementlst[id2-1]==a)
			{
				id2-=1;
			}
			if(((elementlst[id1-1]<=a-k) && (elementlst[id1+1]>=a+k)) || ((elementlst[id2-1]<=a-k) && (elementlst[id2+1]>=a+k)))
			{
				count +=1;
			}
		}
		else
		{
			while(elementlst[id1-1]==a)
			{
				id1-=1;
			}
			if(elementlst[id1-1]<=a-k && elementlst[id1-1]>=a+k)
			{
				count+=1;
			}
		}
	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	int elementlst[n];

	for(int i=0; i<n; i++)
	{
		cin>>elementlst[i];
	}
	sort(elementlst, elementlst+n);
	cout<<pairs(elementlst, n, k);
}