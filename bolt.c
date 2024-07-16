#include<stdio.h>
float round(float time)
{
	float value = (int)(time * 100 + 0.5);
	return (float)(value) / 100; 
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		float k1,k2,k3,v, v2=9.58;
		scanf("%d%d%d%d", &k1, &k2, &k3, &v);
		float time;
		time = 100/(k1*k2*k3*v);
		if(round(time) < v2)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}