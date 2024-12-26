#include<bits/stdc++.h>
using namespace std;

int msb(int n){
    for(int i=32;i>=0;i--){
        if(n && (1LL << i)){
            return i;
        }
    }
    return 0;
}
int main(){
    int t;cin>>t;
   while(t--){ 
    int c; cin>>c;
    int a=0,b=0;
    int bits=msb(c);
    bool flag=false;
    a=a+(1<<bits);
    for(int i=0;i<bits;i++){
        if(c && (1LL << i)){
            b+=(1LL << i);
        }
        else{
            a+=(1LL << i);
            b+=(1LL << i);
        }
    }
    cout<<(a*b)<<endl;
    }
    return 0;
}