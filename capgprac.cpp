#include<bits/stdc++.h>
using namespace std;
char *movehash(char str[], int n)
{
	char str1[100], str2[100];
	int j=0, k=0;
	for(int i=0; i<n; i++)
	{
		if(str[i] == '#')
		{
			str1[j++] = str[i];
		}
		else
		{
			str2[k++] = str[i];
		}
	}
	strcat(str1, str2);
	cout<<str1;
}
int main()
{
	char a[100];
	int len;
	cin>>a;
	len = strlen(a);
	movehash(a, len);
}