#include<stdio.h>
int reverse(int n)
{
	int r;
	int sum=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum = sum*10 + r;
	}
	printf("%d\n", sum);
	sum=0;
}
int main()
{
	int t;
	int n;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		reverse(n);
	}
}