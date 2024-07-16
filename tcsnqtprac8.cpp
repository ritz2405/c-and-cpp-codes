#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	cin>>p;
	string d;
	cin>>d;
	int count=0;
	if(d == "N")
	{
		cout<<"TOTAL MEMBERS:1\n";
		cout<<"COMMISION DETAILS\n";
		cout<<p<<"250 INR\n";
	}
	else
	{
		string child;
		cin>>child;
		vector<string> v;
		string temp="";
		for(int i=0; i<child.length(); i++)
		{
			if(child[i] == ',')
			{
				v.push_back(temp);
				count++;
				temp = "";
			}
			else if(child[i] != ' ')
			{
				temp = temp + child[i];
			}
		}
		v.push_back(temp);
		count = count + 1;
		cout<<"TOTAL MEMBERS:"<<count + 1<<"\n";
		cout<<"COMMISION DETAILS\n";
		cout<<p<<": "<<count * 500<<"INR\n";
		for(int i=0; i<v.size(); i++)
		{
			cout<<i<<": "<<"250 INR\n";
		}
	}
}