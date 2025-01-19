
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n,a,b,c;
//         cin >> n>>a>>b>>c;

//         int sum=a+b+c;
        
//         int x=(n+sum-1)/sum;
//         // cout<<x;
//         int target=sum*(x-1);

//         int day=0;
//         if(target+a >= n){
//             day=1+(x-1)*3;;
//         }
//         else if(target+b >= n){
//             day=2+(x-1)*3;
//         }
//         else{
//             day=3+(x-1)*3;
//         }
//         cout<<day<<endl;

//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int sum = a + b + c;

        int x = n / sum;

        int rem = n - x * sum;

        int day = x * 3; 
        if (rem > 0) {
            day++;
            if (rem > a) {
                day++;
                if (rem > a + b) {
                    day++;
                }
            }
        }
        cout << day << endl;
    }
    return 0;
}
