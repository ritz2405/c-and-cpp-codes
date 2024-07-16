#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0, avg=0,c=0;
	for(int i=0; i<n ;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum/n;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>=avg)
		{
			c++;
		}
	}
	printf("%d\n", c);
}