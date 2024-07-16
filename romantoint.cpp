#include<bits/stdc++.h>
using namespace std;
int main()
{
	// string roman;
	// cin>>roman;
	// int ans = 0;
	unordered_map<char, int> rdict{
		{'I',1},
		{'V',5},
		{'X',10},
		{'L',50},
		{'C',100},
		{'D',500},
		{'M',1000}
	};

	// for(int i=0; i<roman.length(); i++)
	// {
	// 	if(rdict[roman[i]] < rdict[roman[i+1]])
	// 	{
	// 		ans -= rdict[roman[i]];
	// 	}
	// 	else
	// 	{
	// 		ans += rdict[roman[i]];
	// 	}	
	// }
	// cout<<ans<<"\n";
	cout<<rdict['M']<<"\n";
}