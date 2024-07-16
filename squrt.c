#include<stdio.h>
int squareroot(int n)
{
	int temp;
	int sqrt;
	sqrt = n / 2;
	temp = 0;
	while(sqrt != temp)
	{
		temp = sqrt;
		sqrt = (n/temp + temp)/2;
	}
	printf("%d\n", sqrt);
	sqrt = 0;
}
int main()
{
	int t;
	int n;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		squareroot(n);
	}
}