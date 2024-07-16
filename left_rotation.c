#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	int n;
	int d;
	scanf("%d", &n);
	scanf("%d", &d);
	int *arr = malloc(sizeof(int) *n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int *arr2 = malloc(sizeof(int) *n);
	int curr=0;
	for(int i=d; i<n ;i++)
	{
		arr2[curr] = arr[i];
		curr++;
	}
	for(int i=0; i<d; i++)
	{
		arr2[curr] = arr[i];
		curr++;
	}
	for(int i=0; i<n ;i++)
	{
		printf("%d\t",arr2[i]);
	}
}