#include<bits/stdc++.h>
using namespace std;
int main(){

	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);

	// s1.insert(50);
	// s1.erase(s1.begin(), s1.find(30));

	set<int>::iterator it;

	for(it = s1.begin(); it != s1.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\ns1 lower bound";
	cout<<*s1.lower_bound(40);
	cout<<"\ns1 upper bound";
	cout<<*s1.upper_bound(10);
	return 0;
}