#include<bits/stdc++.h>
using namespace std;
int  main()
{
	//cration of 2d array
	int row;
	cin>>row;
	int col;
	cin>>col;

	int** arr = new int*[row];

	for(int i=0; i<row; i++)
	{
		arr[i] = new int[col];
	}
	//taking input

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>arr[i][j];
		}
	}

	//taking output
	cout<<"\n";

	for(int i=0; i<row;i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
//Releasing Memory
	for(int i=0; i<row; i++)
	{
		delete [] arr[i];
	}

	delete []arr;
	return 0;
}