#include<bits/stdc++.h>
using namespace std;
bool isleap(int n)
{
	if(n%100 == 0)
	{
		if(n%400 == 0){
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if(n%4 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
void solve()
{
	string s;
	cin>>s;
	int year, month, date;
	year = stoi(s.substr(0,4));
	month = stoi(s.substr(5,2));
	date = stoi(s.substr(8,2));
	int pills = 0;
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			pills = (31 - date)/2+1;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			pills = (30 - date)/2+1;
			if(date%2 == 0)
			{
				pills += 15;
			}
			else
			{
				pills += 16;
			}
			break;
		default:
			if(isleap(year))
			{
				pills = (29 - date)/2+1;
			}
			else
			{
				pills = (28 - date)/2+1;
				if(date%2 == 0)
				{
					pills+=15;
				}
				else
				{
					pills+=16;
				}
			}
	}
	cout<<pills<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}