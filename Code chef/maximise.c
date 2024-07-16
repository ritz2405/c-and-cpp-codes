#include<limits.h>
#include<stdio.h>
int main()
{
	long long t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%d", &n);
		long long int arr[n];
		long long int max = INT_MIN;
		long long int min = INT_MAX;
		for(int i=0; i<n; i++)
		{
			scanf("%d", arr[i]);
			if(arr[i]>max)
			{
				max=arr[i];
			}
			if(arr[i]<min)
			{
				min = arr[i];
			}
		}
		int ans = max-min;
		ans=ans*2;
		printf("%d\n", ans);
	}
}