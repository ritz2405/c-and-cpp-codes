#include<stdio.h>
int main()
{
	int t;
	int a,b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		if(a>b)
		{
			printf(">\n");
		}
		else if(a<b)
		{
			printf("<\n");
		}
		else
		{
			if (a == b)
			{
				printf("=\n");
			}
		}
	}
}