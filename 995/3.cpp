#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<int> mm(m);
        for(int i=0;i<m;i++){
            cin>>mm[i];
        }
        vector<int> freq(n+1,0);
        // freq[0]=;
        for(int i=1;i<=k;i++){
            int x; cin>>x;
            freq[x]++;
        }
        
        vector<int> pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+freq[i];
        }

        for(int i=0;i<mm.size();i++){
            int idx=mm[i];
            if(pref[idx-1]==idx-1 && pref[n]-pref[idx]==n-idx){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;

    }
    return 0;
}
