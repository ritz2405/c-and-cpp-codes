#include<stdio.h>

void main()
{
	int a[100][100], b[100][100], sum[100][100], i, j, r , c;
	printf("Enter number of rows\n");
	scanf("%d", &r);
	printf("Entyer number of columns\n");
	scanf("%d", &c);
	printf("Enter values for first matrix\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter element a%d%d \n", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter values for second matrx\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter element b%d%d \n", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}

	//sum of the matrix

	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d  ", sum[i][j]);
			if(j == c - 1)
			{
				printf("\n\n");
			}
		}
	}
}