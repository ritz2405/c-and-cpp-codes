#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  int i=0,j=n-1;
  int ans=0;
  while(i<j)
  {
    if(str[i]=='(' and str[j]==')')
    {
        i++;
        j--;
    }
    else if(str[i]=='(' and str[j]=='(')
    {
        ans++;
        j--;
    }
    else if(str[i]==')' and str[j]==')')
    {
        ans++;
        i++;
    }
    else
    {
        ans+=2;
        i++;
        j--;
    }
  }
  if(str[i]==str[j])
  ans++;
  cout<<ans<<endl;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}