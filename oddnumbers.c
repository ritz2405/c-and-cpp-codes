#include<stdio.h>
int main()
{
	int l,r;
	scanf("%d", &l);
	scanf("%d", &r);
	for(int i=l; i<=r; i++)
	{
		if(i%2 != 0)
		{
			printf("%d\n", i);
		}
	}
}