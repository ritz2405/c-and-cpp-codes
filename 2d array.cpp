#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6][6];
	int flag=0, sum, max;
	for(int r=0; r<6; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			cin>>arr[r][c];
		}
	}
	for(int r=0; r<4; r++)
	{
		for(int c=0; c<4; c++)
		{
			sum = arr[r][c] + arr[r][c+1] + arr[r][c+2] + arr[r+1][c+1] + arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];
			if(flag == 0)
			{
				flag = 1;
				max = sum;
			}
			else if(sum>max)
			{
				max = sum;
			}
		}
	}
	cout<<max; 
}