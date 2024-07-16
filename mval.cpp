#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<lli> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int k=0;
        vector<int> store;
        int i=0, j=n-1;
        while(i<j){
            if(v[i]>=0)
                i++;
            else if(v[i]<0 and v[j]>0){
                swap(v[i], v[j]);
                i++;
                j--;
                k+=2;
                store.push_back(i);
                store.push_back(j+2);
            }
            else
                j--;
        }
        i=0;
        lli sm=0;
        while(i<n and v[i]>=0){
            sm+=v[i];
            i++;
        }
        cout<<sm<<"\n";
        cout<<k<<" ";
        for(int i=0;i<store.size(); i++)
            cout<<store[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

