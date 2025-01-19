#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n,d; cin>>n>>d;

        cout<<1<<" ";
        if(d%3==0 || n >= 3) cout<<3<<" ";
        if(d%5==0) cout<<5<<" ";
        if(d%7==0 || n>=3) cout<<7<<" ";
        if(n >=6 || (d%3==0 && n>=3) || d%9==0) cout<<9<<" ";
        cout<<endl;
    }
    return 0;
}