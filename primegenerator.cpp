#include<iostream>
using namespace std;
int main(){
    int w = 0;
    cin>>w;
    for(int i=0; i<w; i++){
    int a,b;
    cin>>a>>b;
    int t = 0;
    if(a<=2){
        cout<<2<<endl;
        a = 3;
    }
    for(int i=a; i<=b; i++){
        t = 0;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                t = 1;
                break;
            }
        }
        if(t == 0){
            cout<<i<<endl;
        }
    }
    cout<<endl;
}
    return 0;
}