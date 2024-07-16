#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int size;
	string s;
	cin>>size;
	cin>>s;
	if(s.find("I") != std::string::npos)
	{
		cout<<"INDIAN\n";
	}
	else if(s.find("Y") != std::string::npos)
	{
		cout<<"NOT INDIAN\n";
	}
	else
	{
		cout<<"NOT SURE\n";
	}
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





// Storage
// Access tier
// Hot tier
// Cool
// Archive
// soft delete and hard delete

// Blob unstruct data, architecture
// block 
// append
// page

// file share.
// view and table

// move data from blob
// azcopy
// libraries
// text file or images
