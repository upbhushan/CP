#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  int t;
  cin>> t;
  while(t--){
    int n, m;
    cin>> n;
    cin>> m;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
      cin>> v[i].first>> v[i].second;
    }
    int ans = 4 * m * n;
    for(int i=1; i<n; i++){
      ans = ans - 2 * (m - v[i].first + m - v[i].second);
    }
    cout<< ans<< endl;
  }
  return 0;
}