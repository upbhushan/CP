// // #include <bits/stdc++.h>
// // using namespace std;

// // int solve(int a, int b) {
// //     int cnt = 0;
// //     while (a != b) {
// //         if (a > b) {
// //             a=a-b;  
// //         } else {
// //             b=b-a;  
// //         }
// //         cnt++; 
// //     }
// //     return cnt;
// // }

// // int main() {
// //     int a, b;
// //     cin>>a>>b; 
// //     cout<<solve(a, b)<<endl;  
// //     return 0;
// // }



// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n; // Number of comic books

// //     vector<pair<string, int>> comics;
// //     for (int i = 0; i < n; i++) {
// //         string name;
// //         int price;
// //         cin >> name >> price;
// //         comics.push_back({name, price});
// //     }

// //     int k;
// //     cin >> k; // Available cash

// //     // Sort comics by price, then by name alphabetically
// //     sort(comics.begin(), comics.end(), [](pair<string, int> &a, pair<string, int> &b) {
// //         if (a.second == b.second)
// //             return a.first < b.first;
// //         return a.second < b.second;
// //     });

// //     vector<pair<string, int>> purchased;
// //     int pairs = 0;

// //     // Traverse sorted comics to purchase pairs
// //     for (size_t i = 0; i < comics.size(); i++) {
// //         if (i + 1 < comics.size() && comics[i].second == comics[i + 1].second) {
// //             if (k >= 2 * comics[i].second) {
// //                 purchased.push_back(comics[i]);
// //                 purchased.push_back(comics[i + 1]);
// //                 k -= 2 * comics[i].second;
// //                 pairs++;
// //                 i++; // Skip the next comic as it's already paired
// //             }
// //         }
// //     }

// //     // Output the results
// //     if (purchased.empty()) {
// //         cout << "NONE" << endl;
// //     } else {
// //         for (auto &comic : purchased) {
// //             cout << comic.first << " - " << comic.second << endl;
// //         }
// //     }

// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // int solve(int a, int b) {
// //     int cnt = 0;
// //     while (a != b) {
// //         if (a > b) {
// //             cnt += a / b; 
// //             a %= b;      
// //             if (a == 0) { 
// //                 a = b;
// //             }
// //         } else {
// //             cnt += b / a; 
// //             b %= a;      
// //             if (b == 0) {
// //                 b = a;
// //             }
// //         }
// //     }
// //     return cnt-1; 
// // }

// // int main() {
// //     int a, b;
// //     cin>>a>>b;
// //     cout<<solve(a, b)<<endl;
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Number of comic books

//     vector<pair<string, int>> comics;
//     for (int i = 0; i < n; i++) {
//         string name;
//         int price;
//         cin >> ws; // Consume whitespace
//         getline(cin, name, ' '); // Read the comic name until a space
//         cin >> price; // Read the price
//         comics.push_back({name, price});
//     }

//     int k;
//     cin >> k; // Available cash

//     // Sort comics by price, then by name alphabetically
//     sort(comics.begin(), comics.end(), [](pair<string, int> &a, pair<string, int> &b) {
//         if (a.second == b.second)
//             return a.first < b.first;
//         return a.second < b.second;
//     });

//     vector<pair<string, int>> purchased;
//     int pairs = 0;

//     // Traverse sorted comics to purchase pairs
//     for (size_t i = 0; i < comics.size(); i++) {
//         if (i + 1 < comics.size() && comics[i].second == comics[i + 1].second) {
//             if (k >= 2 * comics[i].second) {
//                 purchased.push_back(comics[i]);
//                 purchased.push_back(comics[i + 1]);
//                 k -= 2 * comics[i].second;
//                 pairs++;
//                 i++; // Skip the next comic as it's already paired
//             }
//         }
//     }

//     // Output the results
//     if (purchased.empty()) {
//         cout << "NONE" << endl;
//     } else {
//         for (auto &comic : purchased) {
//             cout << comic.first << " - " << comic.second << endl;
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    cout<<1<<" ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

