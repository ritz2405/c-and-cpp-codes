#include<stdio.h>
int main()
{
	int t, n, count=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i=2; i<=n/2; i++)
		{
			if(n%i == 0)
			{
				count++;
			}
		}
		if(count == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}