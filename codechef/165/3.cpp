#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                v.push_back(i);
            } 
        }
        if(v.size() > 2){
            cout<<"NO"<<endl;
        }
        else if(v.size()==0){
            cout<<"YES"<<endl;
        }
        else if(v.size()==1){
            int idx=v[0];
            if(s[idx]==s[0] && s[idx]==s.back()){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(s[v[0]]!=s[v[1]]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
