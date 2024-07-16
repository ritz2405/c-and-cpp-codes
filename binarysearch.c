#include<stdio.h>

int binarysearch(int arr[], int x, int l, int h)
{
	while(l <= h)
	{
		int mid = l + (h - l) / 2;

		if(arr[mid] == x)
		{
			return mid;
		}
		if(arr[mid] < x)
		{
			l = mid + 1;
		}
		else
		{
			h = mid - 1;
		}
	}

	return -1;
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int x;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	int result = binarysearch(arr , x, 0, n -1);
	if(result == -1)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}