#include<stdio.h>
#include<stdlib.h>
char* substr(const char *src, int m, int n)
{
	int len = n -m;
	char *dest = (char*)malloc(sizeof(char) + (len+1));
	for(int i=m; i<n && (*(src + i) != '\0'); i++)
	{
		*dest = *(src + i);
		dest++;
	}

	*dest = '\0';
	return dest - len;
}
int isleap(int y)
{
	if(y%100 == 0)
	{
		return 1;
	}
	if(y%100 == 400)
	{
		return 0;
	}
	if(y%4 == 0)
	{
		return 0;
	}
}
void main()
{
	char s[100];
	gets(s);
	int d = atoi(substr(s,0,2));
	int m = atoi(substr(s,3,5));
	int y = atoi(substr(s,6,10));
	int f=isleap(y);
	if()
	{
		if(m == 2)
		{
			if(d<1 || d>29)
			{
				printf("%d\n", d);
			}
		}
	}
	else
	{
		if(d<1)
		{
			printf("%d\n", d);
			exit(0);
		}
		else if(m<1 || m>12)
		{
			printf("%d\n", m);
			exit(0);
		}
		else if(m == 2 && d>28)
		{
			printf("%d\n", d);
			exit(0);
		}
		else if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d>31)
		{
			printf("%d\n", d);
			exit(0);
		}
		else if((m == 4 || m == 6 || m == 9 || m == 11) && d>30)
		{
			printf("%d\n", d);
			exit(0);
		}
		else
		{
			printf("0\n");
		}
	}
}