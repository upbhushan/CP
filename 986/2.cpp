#include <bits/stdc++.h>
#define superb ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    superb
    int t;
    cin >> t;
    while (t--) {
        int n,b,c; cin>>n>>b>>c;
        int cnt=0;
        for(int i=0;i<n;i++){
            if((b*(i-1)+c) > n-1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}



