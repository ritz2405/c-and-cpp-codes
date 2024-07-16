#include<stdio.h>
#include<stdbool.h>
bool threesome(int A[], int n, int sum)
{
	int i, j, k;
	int l,r;
	for(i=0; i< n - 2; i++)
	{
		for(j=i + 1; j< n - 1; j++)
		{
			for(k=j + 1; k< n; k++)
			{
				if(A[i] + A[j] + A[k] == sum)
				{
					printf("Treiplet is %d %d %d ", A[i], A[j], A[k]);
					return true;
				}
			}
		}
	}
	printf("No triplet found");
	return false;
}
int main()
{
	int A[] = {-1,2,-3,4,5,6};
	int sum = 0;
	int n = sizeof(A) / sizeof(A[0]);
	threesome(A, n, sum);
	return 0;
}