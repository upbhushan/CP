#include<bits/stdc++.h>
#define int long long
#define superb ios_base::sync_with_stdio(false); cin.tie(NULL); 
using namespace std;

void solve(string str,string r,int n){
        vector<char> st;
        bool flag=false;
        int len = 0;
        
        for (auto ele : str) {
            st.push_back(ele);
            while (st.size() >= 2 && st[st.size() - 2] != st.back() && len < r.length()) {
                char new_char = r[len];
                st.pop_back();
                st.pop_back();
                st.push_back(new_char);
                len++;
            }
        }

        if (len == n - 1 && st.size() == 1) {
            flag=true;
        } 
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
int32_t main() {
    superb
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str, r;
        cin >> str >> r;
        solve(str,r,n);
    }

    return 0;
}
