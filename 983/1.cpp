#include<bits/stdc++.h>
using namespace std;
int solve1(vector<int> &v,int zero,int one){
    int minimum=0;
    if(zero%2==0 && one%2==0){
        minimum=0;
    }
    else{
        minimum=1;
    }
    return minimum;
}
int solve2(vector<int> &v,int zero,int one){
    int maximum=0;
    maximum=min(zero,one);
    return maximum;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x=2*n;
        vector<int> v(x);
        for(int i=0;i<x;i++){
            cin>>v[i];
        }
        int zero=0; int one=0;
        for(int i=0;i<x;i++){
            if(v[i]==0){
                zero++;
            }
            else{
                one++;
            }
        }
        int ans1=solve1(v,zero,one);
        int ans2=solve2(v,zero,one);
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}