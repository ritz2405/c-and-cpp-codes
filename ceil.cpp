#include<iostream>
using namespace std;
int main()
{
	int A, B, c;
	cin>>A;
	cin>>B;

	if(A>B)
	{
		c=A-B;
		if(c%10 == 9)
		{
			c = c -1;
		}
		else
		{
			c = c + 1;
		}
	}

	if(B>A)
	{
		c=B-A;
		if(c%10 == 9)
		{
			c = c - 1;
		}
		else
		{
			c = c + 1;
		}
	}
	cout<<c;
	return 0;
}