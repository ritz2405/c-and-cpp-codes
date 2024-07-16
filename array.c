#include<stdio.h>
void main()
{
	int a[5];
	for(int i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum=0;
	for(int i=0; i<5; i++)
	{
		sum=sum+a[i];
	}
	printf("%d", sum);
}