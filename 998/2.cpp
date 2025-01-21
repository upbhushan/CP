#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> make_per(vector<int> &p,vector<pair<int,int>> &v){
    int n=v.size();
        for (int i = 0; i < n; ++i) {
            p.push_back(v[i].second + 1); 
    }
    return p;
}

int32_t main() {
    int tt=1;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        //cow
        vector<pair<int, int>> v(n); 
        //card
        vector<vector<int>> cc(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cc[i][j];
            }
            sort(cc[i].begin(), cc[i].end());
            v[i] = {cc[i][0], i}; 
        }

        sort(v.begin(), v.end()); 

        vector<int> p;
        make_per(p,v);

        int top_ele = -1;
        bool valid = true;
        for (int i = 0; i < m && valid; ++i) {
            for (int i = 0; i < n && valid; ++i) {
                int cow_no = v[i].second;
                auto it = upper_bound(cc[cow_no].begin(), cc[cow_no].end(), top_ele);
                if (it == cc[cow_no].end()) {
                    valid = false;
                    break;
                } else {
                    top_ele = *it;
                    cc[cow_no].erase(it); 
                }
            }
            if(!valid){
                break;
            }
        }

        if (valid) {
            for(auto ele:p){
                cout<<ele<<" ";
            }
            cout<<endl;
        } else {
            cout <<-1<<endl;
        }
    }
    return 0;
}
