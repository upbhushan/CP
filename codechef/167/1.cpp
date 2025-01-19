#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int zero=0,ones=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
        }
        if(ones>0 && ones!=n) cout<<1<<endl;
	    else cout<<n<<endl;
    }

    return 0;
}