// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// const int MOD = 1e9 + 7;

// int power(int base, int exp, int mod) {
//     int res = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1) { 
//             res = (res * base) % mod;
//         }
//         base = (base * base) % mod;  
//         exp /= 2;  
//     }
//     return res;
// }

// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         int ans = 0;
        
//         for (int i = n - k + 1; i <= n; i++) {
//             ans = (ans + power(i, i, MOD)) % MOD;
//         }

//         if (ans % 2 == 0) {
//             cout << "YES" << endl;  
//         } else {
//             cout << "NO" << endl;  
//         }
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int main() {
//     int t; 
//     cin >> t; 
//     while (t--) {
//         int n, k; 
//         cin >> n >> k;

//         // Calculate the parity using the sum formula
//         long long sum = k * (2 * n - k + 1) / 2;

//         // Check if the sum is even or odd
//         if (sum % 2 == 0) {
//             cout << "YES" << endl;  // Sum is even
//         } else {
//             cout << "NO" << endl;   // Sum is odd
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int s = n - k + 1;
        int sum = (((s + n)*k)/2);
        if(sum % 2 == 0){
            cout << "YES"<<endl;
        } 
        else{
            cout << "NO"<<endl;
        }
            
    }
return 0;
}

/*
4
s=1
(5*4)/2=10

3
s=2
((2+3)*2)/2=5

*/