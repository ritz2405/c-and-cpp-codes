#include<stdio.h>
int main()
{
	int t;
	int a1, a2, a3;
	int sum=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &a1, &a2, &a3);
		sum = a1 + a2 + a3;
		if(sum == 180)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
}