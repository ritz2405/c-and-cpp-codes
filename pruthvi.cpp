#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    a[0]=a[0]+k;
    for(int i=1;i<n;i++)
    {
        if(a[0]<a[i+1]-k)
        {
            
        }
        else
        {
            a[i]=a[i]+k;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    
    int minimiser=a[n-1]-a[0];
    cout<<"\n";
    cout<<minimiser;
}