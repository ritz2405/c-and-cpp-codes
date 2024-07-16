#include<iostream>
using namespace std;
int main()
{
    int n,*arr,i,d,m,j=0;
    int csum=0,sum = 0;
    cin>>n;
    arr = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum = sum+arr[j];
        }
        if(sum==d)
        {
            csum++;
        }
    }
    cout<<csum;
    return 0;

}