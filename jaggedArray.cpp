#include<bits/stdc++.h>
using namespace std;
int main()
{
	int rows;
	cin>>rows;
	int** ptr = new int*[rows];
	for(int i=0; i<rows; i++)
	{
		ptr[i] = new int[cols[i]];
	}

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols[i]; j++)
		{
			cin>>ptr[i][j];
		}
	}

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols[i]; j++)
		{
			cout<<ptr[i][j];
		}
	}
}