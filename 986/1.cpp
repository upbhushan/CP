#include <bits/stdc++.h>
#define superb ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    superb
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        string s;cin>>s;
        int x=0,y=0;
        bool flag=false;
        for(int i=0;i<100*n;i++){
            if(s[i%n]=='N') y++;
            if(x==a && y==b) {
                flag=true;
                break;
            }
            else if(s[i%n]=='E') x++;
            if(x==a && y==b) {
                flag=true;
                break;
            }
            else if(s[i%n]=='S') y--;
            if(x==a && y==b) {
                flag=true;
                break;
            }
            else if(s[i%n]=='W') x--; 
            if(x==a && y==b) {
                flag=true;
                break;
            } 
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}



