#include<stdio.h>
#include<string.h>
int main()
{
	int count[10]={0,0,0,0,0,0,0,0,0,0};
	char a[20];
	scanf("%s", &a);
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<10; j++)
		{
			count[i]++;
		}
	}
	for(int i=0; i<10; i++)
	{
		printf("%d\n", count[i]);
	}
}