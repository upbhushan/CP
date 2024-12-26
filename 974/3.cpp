#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(),v.end());
        if(n < 3){
            cout<<-1<<endl;
        }
        else{
            cout<<max(0LL,v[n/2]*2*n-sum+1)<<endl;
        }
    }
    return 0;
}
