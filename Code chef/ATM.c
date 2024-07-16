#include<stdio.h>
int main()
{
	int r;
	float s,p;
	scanf("%d %f", &r, &p);
	s = p - r - 0.5;
	if(r % 5 == 0 && p >= r+0.5)
	{
		printf("%6.2f", s);
	}
	else
	{
		printf("%6.2f", p);
	}
}