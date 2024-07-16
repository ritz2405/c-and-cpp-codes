#include<stdio.h>

void main()
{
	int matrix[10][10], transpose[10][10], r, c, i, j;
	printf("Enter number of rows and columns\n");
	scanf("%d%d", &r, &c);

	printf("Enter elements for matrix\n");
	for (i = 0; i < r ; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	// for(i=0; i<r; i++)
	// {
	// 	for(j=0; j<c; j++)
	// 	{
	// 		printf("%d ", matrix[i][j]);

	// 		if(j == r-1)
	// 		{
	// 			printf("\n");
	// 		}
	// 	}
	// }

	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			transpose[j][i] = matrix[i][j];
		}
	}

	printf("Transpose matrix is: \n");

	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("%d ", transpose[i][j]);

			if(j == r-1)
			{
				printf("\n");
			}
		}
	}
}