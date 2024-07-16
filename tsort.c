#include<stdio.h>
int insertionsort(int arr[], int n)
{
	int i,j,key;
	for(int i=1; i<n; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	insertionsort(arr, n);
	display(arr, n);
}