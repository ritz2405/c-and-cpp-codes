#include<iostream>
using namespace std;
void func()
{
	static int i = 2;
	int j = 0;
	i++;
	j++;
	cout<<"i="<<i<<"and j="<<j<<endl;
}
int main()
{
	int m;
	for(m=0;m<3;m++)
	{
		func();
	}
}