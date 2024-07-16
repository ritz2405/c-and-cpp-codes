#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	set<int> myset;
	int arr1[n1], arr2[n2];
	for(int i=0; i<n1; i++){
		cin>>arr1[i];
		myset.insert(arr1[i]);
	}
	for(int i=0; i<n2; i++)
	{
		cin>>arr2[i];
		myset.insert(arr2[i]);
	}
	cout<<myset.size()<<"\n";
}