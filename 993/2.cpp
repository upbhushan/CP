#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='p'){
                ans+='q';
            }
            else if(s[i]=='q'){
                ans+='p';
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}