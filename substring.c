#include<stdio.h>
#include<string.h>
#include<stdlib.h>
static int mycmp(const void* a, const void* b)
{
	return strcmp(*(const char**)a, *(const char**)b);
}
void sort(const char* arr[], int n)
{
	qsort(arr, n, sizeof(const char*), mycmp)
}
void subString(const char* arr[], int n)
{
	for(int l=1; l<=n; l++)
	{
		for(int i=0; i<=n-l; i++)
		{
			int j=i+l-1;
			for(int k=i; k<=j; k++)
			{
				printf("%s", arr[k]);
			}
		}
		printf("\n");
	}
}
int main()
{
	const char* arr[];
	gets(arr);
	int n = sizeof(arr) / sizeof(arr[0]);
	return 0;
}