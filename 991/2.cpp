#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum_even=0;
        int sum_odd=0;
        int even_place=(n+1)/2;
        int odd_place=n/2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum_even+=v[i];
            }
            else{
                sum_odd+=v[i];
            }
        }

        if(sum_even%even_place==0 && sum_odd%odd_place==0 && sum_even/even_place==sum_odd/odd_place){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}