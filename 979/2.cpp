#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        string str="1";
        for(int i=0;i<x-1;i++){
            str+="0";
        }
        cout<<str<<endl;
    }
    return 0;
}
