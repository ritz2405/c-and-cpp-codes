#include<stdio.h>
int main()
{
	int n, t, sum=0;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		while(n>0)
		{
			int r;
			r=n%10;
			sum = sum + r;
			n=n/10;
		}
		printf("%d\n", sum);
		sum = 0;
	}
}