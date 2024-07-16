#include<stdio.h>
#include<math.h>

void insertionsort(int arr[], int n)
{
		int i, key, j;

		for(i=1; i<n; i++)
		{
			key = arr[i];
			j = i -1;
			while ( j>=0 && arr[j] > key)
			{
				arr[j+1] = arr[j];
				j = j -1;
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
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionsort(arr, n);
	display(arr, n);
	return 0;
}