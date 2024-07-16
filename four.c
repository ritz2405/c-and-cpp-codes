#include<stdio.h>
int fourfind(int n)
{
	int r,c;
	r=n%10;
	if(r == 4)
	{
		c++;
	}
	while(n != 0)
	{
		n=n/10;
		if(n%10 == 4 || n == 4)
		{
			c++;
		}
	}
	printf("%d\n", c);
	c = 0;
}



int main()
{
	int t;
	int n;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		fourfind(n);
	}
	
}