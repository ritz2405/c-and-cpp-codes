#include<iostream>
using namespace std;
class calculate
{
public:
	float c,d,s,v,l,v2;
	void input();
	float area();
	void display();
};
void calculate::input()
{
	cout<<"Enter velocity";
	cin>>v;
	v2=v*5/18;
	cout<<"Enter weight";
	cin>>l;
}
float calculate::area()
{
	c=0.55;
	d=1.225;
	s=(2*l)/(c*d*v2*v2);
	return s;
}
void calculate::display()
{
	cout<<"\n Surface Area is: "<<area();
}
int main()
{
	calculate area1;
	area1.input();
	area1.display();
}