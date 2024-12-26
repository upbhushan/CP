#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s1,s2; cin>>s1>>s2;
        int n=s1.length();
        int m=s2.length();
        int k= n > m ? m: n;
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s1[i]!=s2[i]){
                break;
            }
            else{
                cnt++;
            }
        }
        if(cnt){
            cout<<(n+m-(cnt-1))<<endl;
        }
        else{
            cout<<n+m<<endl;
        }

    }
    return 0;
}