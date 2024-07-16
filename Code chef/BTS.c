#include<stdio.h>
int factorial(int num)
{
	int sum=0, c=5;
	while(num/c == 0)
	{
		sum = sum + (num/c);
		c=c*5;
	}
	return sum;
}
int main()
{
	 
}