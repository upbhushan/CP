#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
    	vector<int> p(n);
    	for(int i=0;i<n;i++){
    	    cin>>p[i];
    	}

        bool flag=true;
        for(int i=0;i<n;i++){
            int cnt=__builtin_popcount(p[i]);
            int count=__builtin_popcount(i+1);
            if(cnt!=count){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;   
    	}
	
    return 0;
}
