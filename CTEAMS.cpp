#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	// your code goes here
ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
ll sumy=0,sumo=0;
set<pair<ll,ll>>y;
set<pair<ll,ll>>o;
  ll a,r;
cin>>a>>r;
sumy+=r;
y.insert({a,r});
cout<<r<<"\n";
t--;   
while(t--)
{
 
   cin>>a>>r;
   auto it1=*y.rbegin();
   auto it2=*o.begin();
   ll m=y.size();
   ll n=o.size();
   if(n==0 || n==m-1)
   {
       if(a>=it1.first)
         {
             sumo+=r;
             o.insert({a,r});
         }
         else {
             sumy-=(it1.second);
             sumo+=(it1.second);
             o.insert({it1.first,it1.second});
             y.erase((--y.end()));
             y.insert({a,r});
             sumy+=r;
         }
   }
   else if(m==n)
   {
       if(a>it2.first)
       {
           sumo-=it2.second;
           sumy+=it2.second;
           y.insert({it2.first,it2.second});
           o.erase(o.begin());
           o.insert({a,r});
           sumo+=r;
       }
       else {
           y.insert({a,r});
           sumy+=r;
       }
   }  
       
 cout<<llabs(sumy-sumo)<<"\n";   
}

	return 0;
}
