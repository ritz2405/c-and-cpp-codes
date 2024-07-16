#include<stdio.h>
int main()
{
	int t;
	int s1=0, s2=0;
	int max_diff = 0;
	int diff = 0;
	int p1,p2;
	int w;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &p1, &p2);
		s1 = s1 + p1;
		s2 = s2 + p2;
		if(s1>s2)
		{
			diff = s1 - s2;
			if(diff > max_diff)
			{
				max_diff = diff;
				w = 1;
			}
		}
		else
		{
			diff = s2 - s1;
			if(diff > max_diff)
			{
				max_diff = diff;
				w = 2;
			}
		}
	}
	printf("%d %d", w,max_diff);
}