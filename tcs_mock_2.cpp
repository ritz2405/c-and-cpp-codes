#include<bits/stdc++.h>
using namespace std;
int find(int n1, int n2)
{
	int count=0;
	for(int i=n1; i<=n2; i++)
	{
		int num = i;
		vector<bool> visisted;
		visisted.assign(10, false);
		while(num > 0)
		{
			if(visisted[num % 10] == true)
			{
				break;
			}
			visisted[num%10] = true;
			num /= 10;
		}
		if(num == 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n1, n2;
	cin>>n1>>n2;
	cout<<find(n1,n2);
}