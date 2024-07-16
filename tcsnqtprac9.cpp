#include<bits/stdc++.h>
using namespace std;
int main()
{
	char o;
	cin>>o;
	string c[3] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
	string t[8] = {"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
	string s[4] = {"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
	string b[3] = {"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};

	int n;
	cin>>n;
	string res;
	if(o == 'c' && n<=3)
	{
		res = c[n-1];
	}
	else if(o=='t' && n<=8)
	{
		res = t[n-1];
	}
	else if(o=='s' && n<=4)
	{
		res = s[n-1];
	}
	else if(o == 'b' && n<=3)
	{
		res = b[n-1];
	}
	else
	{
		res = "INVALID OUTPUT";
	}

	if(res != "INVALID OUTPUT")
	{
		cout<<"Welcome to CCD\n";
		cout<<"Enjoy your "<<res<<"\n";
	}
}