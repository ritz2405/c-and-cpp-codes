#include<stdio.h>

void main()
{
	int r1,c1,r2,c2,i,j,k, sum = 0;
	int first[10][10], second[10][10], multiply[10][10];

	printf("Enter number of rows and columns for first matrix \n");
	scanf("%d%d", &r1, &c1);

	printf("Enter elements for first matrix\n");
	for(i=0; i<r1; i++)
	{
		for(j=0l; j<c1; j++)
		{
			scanf("%d", &first[i][j]);
		}
	}

	printf("Enter rows and columns for second matrix\n");
	scanf("%d%d", &r2, &c2);

	if(c1 != r1)
	{
		printf("Multiplication is not possible");
	}
	else
	{
		printf("Enter elements for seconf matrix\n");
		for(i=0 ;i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				scanf("%d", &second[i][j]);
			}
		}

		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				for(k=0; k<r2; k++)
				{
					sum= sum + first[i][k]*second[k][j];
				}

				multiply[i][j] = sum;
				sum = 0;
			}
		}

		printf("Product of matrices\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("%d\t", multiply[i][j]);

				
			}
			printf("\n");
		}
	}

	
}