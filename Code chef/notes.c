#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d", &t);
	int arr[6] = {1,2,5,10,50,100};
	while(t--)
	{
		scanf("%d", &n);
		int temp=n, count=0;
		for(int i=5; i>=0; i--)
		{
			count = count + temp/arr[i];
			temp = temp%arr[i];
		}
		printf("%d\n", count);
	}
}