#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	int n, q;
	char *n_array[10000], *q_array[10000];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		char s[21];
		scanf("%s",&s);
		n_array[i]=malloc(21);
		strcpy(n_array[i], s);
	}

	scanf("%d",&q);
	for(int i2=0; i2<q; i2++)
	{
		int occurs=0, result;
		char s[21];
		scanf("%s", &s);
		q_array[i2] = malloc(21);
		strcpy(q_array[i2], s);
		for(int j=0; j<n; j++)
		{
			result = strcmp(q_array[i2], n_array[j]);
			if(result == 0)
			{
				occurs++;
			}
		}
		printf("%d\n", occurs);
	}
}