// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve(int n, map<int, int> &mp, vector<int> &v) {
//     for (int i = 0; i < n; i++) {
//         int x = (i + 1) * (n - i) - 1;
//         mp[x]++;
//         // cout<<mp[x]<<" ";

//         if (i > 0) {
//             int y = (n - i) * i;
//             mp[y] += (v[i] - v[i - 1] - 1);
//             // cout<<mp[y]<<" ";
//         }
//     }
// }

// int32_t main() {
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         map<int, int> mp;
//         solve(n, mp, v);

//         while (q--) {
//             int k; 
//             cin >> k;
//             if (mp.find(k) == mp.end()) {
//                 cout << 0 << " ";
//             } else {
//                 cout << mp[k] << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        if(issorted(v)){
            cout<<"YES"<<endl;
        }
        else if(k > 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}