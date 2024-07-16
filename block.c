#include<stdio.h>
int main()
{
	int temp, sum=0, r, t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		temp = n;
		while(n>0)
		{
			r=n%10;
			sum=(sum*10) + r;
			n=n/10;
		}
		if(sum == temp)
		{
			printf("wins\n");
		}
		else
		{
			printf("loses\n");
		}
		sum=0;
	}
	return 0;
}