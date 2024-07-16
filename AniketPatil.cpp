#include<bits/stdc++.h>
using namespace std;
class Service
{
protected:
	string s_name;
	string s_number;
public:
	void setName()
	{
		cout<<"Enter name ";
		cin>>s_name;
	}
	void setNumber()
	{
		cout<<"Enter Number ";
		cin>>s_number;
	}
	virtual void getDetails() = 0;
};
class Loan: public Service{
protected:
	int l_amt;
public:
	void setAmt()
	{
		cout<<"Enter Ammount ";
		cin>>l_amt;
	}
	void getDetails()
	{
		cout<<"Loan\n";
		cout<<"Name "<<s_name<<"\n";
		cout<<"Number "<<s_number<<"\n";
		cout<<"Ammount "<<l_amt;
	}
};
int main()
{
	Service *s;
	s = new Loan();
	s->setName();
	s->setNumber();
	s->setAmt(); 
	s->getDetails();
}