#include <bits/stdc++.h>
#define int long long
using namespace std;

// void bhu() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> p(n);
//         for (int i = 0; i < n; i++){
//             cin >> p[i];
//         }
//         vector<int> v = p;
//         //sorted p
//         sort(v.begin(), v.end());
//         bool flag=false;
//         int curr = 0;
//         while (curr < n) {
//             int next = curr;
//             while (next + 1 < n && abs(p[next + 1] - p[next]) == 1){
//                 next++;
//             }
//             sort(p.begin() + curr, p.begin() + next + 1);
//             curr = next + 1;
//             if (p == v) {
//             flag=true;
//             break;
//             } 
//         }
//         if(flag){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }    
//     }
// }


void bhu(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }   
        bool flag=true;
        for(int i=0;i<n;i++){
            if (p[i] < i || p[i] > i + 2) {
                 flag = false;
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
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bhu();
    return 0;
}
