#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int a;
        string s;
        cin>>a>>s;
    
        if(a==0){
           cout<<s<<endl;
        }
        else{
            int temp=0;
            for(int i=0;i<s.size();i++){
                temp=((s[i]-'0')+(temp*10))%a;
            }
            cout<<__gcd(a,temp)<<endl; 
        }
    }
	return 0;
}