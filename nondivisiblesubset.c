#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
int n,k,i,c=0;
cin>>n>>k;
int arr[n];
for(i=0;i<n;i++) {
cin>>arr[i];
}
int b[k];
for(i=0;i<k;i++) {
b[i]=0;
}
for(i=0;i<n;i++) {
b[arr[i]%k]+=1;
}
c=min(b[0],1);
for(i=1;i<k/2+1;i++) {
if(i!=k-i) {
c+=max(b[i],b[k-i]);
}
}
if(k%2==0) c++;
cout<<c;
return 0;
}