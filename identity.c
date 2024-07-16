#include<stdio.h>

void main()
{
	int a[10][10], i, j, flag =0, r, c;
	printf("Enter number of row sand columns\n");
	scanf("%d%d", &r, &c);

	printf("Enter elements of matrix\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	//check if identity matrix
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if( i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if( i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}

	if(flag == 0)
	{
		printf("Given Matrix is IDENTITY matrix\n");
	}

	else
	{
		printf("GivenMatrixis not Identity matrix\n");
	}
}