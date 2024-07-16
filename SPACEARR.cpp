#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int

void solve(){
  int n; cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  int num = 0;
  for(int i=1; i<=n; i++)
  {
    if( arr[i-1]>i ) {
      cout<<"Second"<<endl;
      return;
    }
    num += i - arr[i-1];
  }

  if( num%2 )
    cout<<"First"<<endl;
  else 
    cout<<"Second"<<endl;
}

int main()
{
    LL t; cin>>t;
    while( t-- ){
     solve();
    }
    return 0;
}