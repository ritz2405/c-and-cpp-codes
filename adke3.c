#include<stdio.h>
int arr[]=[0,-1,2,-3,1]
int sum=-2;
int i,j;
int count=0;

int function();

int function()
{
	
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i]+arr[j] == sum)
			{
				count++;
			}
		}
	}
}

int main()
{
	int c = function(arr[]);
	printf("count")
}