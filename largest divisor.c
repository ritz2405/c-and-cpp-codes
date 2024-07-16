#include<stdio.h>
int max(int b[])
{
	int max=b[0];
	for(int i=0; i<10; i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	return max;
}
int main()
{
	int n,d;
	int b[10]={};
	scanf("%d", &n);
	for(int i=1; i<=10; i++)
	{
		if(n%i == 0)
		{
			b[i] = i;
		}
	}
	d=max(b);
	printf("%d\n", d);
}