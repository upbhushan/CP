#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int k,l1,r1,l2,r2; cin>>k>>l1>>r1>>l2>>r2;
        int n=1;
        int cnt=0;
        while(n<=1e9){
            cnt+=max(min(r2/n,r1)-max((l2+n-1)/n,l1)+1,0LL);
            n=n*k;
        }
        cout<<cnt<<endl;
    }
    return 0;
}