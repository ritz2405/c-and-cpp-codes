#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int c[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
        count+=c[i];
    }

    int sum=((n*(n+1))/2);

    if(count!=sum){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    return 0;

}