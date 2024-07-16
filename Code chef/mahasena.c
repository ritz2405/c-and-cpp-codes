#include<stdio.h>
int main()
{
	int n, e=0, o=0;
	scanf("%d", &n);
	while(n--)
	{
		int w;
		scanf("%d", &w);
		if(w%2 == 0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	if(e>o)
	{
		printf("READY FOR BATTLE\n");
	}
	else
	{
		printf("NOT READY\n");
	}
}