#include<stdio.h>

int hasElement(int item, int arr[],int n)
{
	int status = 0;
	int i;
	for (i=0; i<n; i++)
	{
		if(arr[i] == item)
		{
			status = 1;
			break;
		}
	}
	return status;
}

int printpairs(int arr[], int n , int sum)
{
	int pairs[n];
	int k = 0;
	int i,j;
	for(i=0; i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			if(i == j)
			{
				continue;
			}
			if (arr[i] + arr[j] == sum)
			{
				if (!hasElement(arr[i], pairs, n))
				{
					pairs[k++] = arr[i];
					pairs[k++] = arr[j];
				}
			}
		}
	}
	if(k == 0)
	{
		printf("-1\n");
	}
	else
	{
		for(i=0; i<n/2; i+=2)
		{
			printf("%d %d\n",pairs[i], pairs[i+1]);
		}
	}
}


int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sum;
	scanf("%d", &sum);

	printpairs(arr, n, sum);
	return 0;
}