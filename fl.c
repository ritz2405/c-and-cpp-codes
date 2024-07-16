#include<stdio.h>
int main()
{
	int t,n,r,first;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		r = n%10;
		first = n;
		while(first >= 10)
		{
			first = first / 10;
		}
		printf("%d\n", r+first);
	}
}