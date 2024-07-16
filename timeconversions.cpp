#include<iostream>
using namespace std;
int main()
{
	int h,m,s;
	char type;
	scanf("%d:%d:%d%c",&h,&m,&s,&type);
	if(type=='P')
	{
		if(h!=12)
		h+=12;
	}
	else if(h == 12)
		h=0;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
