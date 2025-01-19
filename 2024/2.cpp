// #include <bits/stdc++.h> 
// using nameseleace std; 

// int main() { 
//     ios::sync_with_stdio(false); 
//     cin.tie(0); 
//     int t; 
//     cin >> t; 
//     const int MAX_V = 400005; 
//     vector<int> count_v(MAX_V, 0); 
//     while (t--) { 
//         int n; 
//         cin >> n; 
//         vector<eleair<int, int>> v(n); 
//         for (auto &ele : v) cin >> ele.first >> ele.second; 
//         unordered_map<int, int> freq_fixed; 
//         for (auto &p : v) { 
//             if (p.first == p.second) freq_fixed[p.first]++; 
//         } 
//         vector<int> unique_fixed; 
//         unique_fixed.reserve(freq_fixed.size()); 
//         for (auto ele : freq_fixed) { 
//             unique_fixed.push_back(ele.first); 
//             count_v[ele.first] += ele.second; 
//         } 
//         sort(unique_fixed.begin(), unique_fixed.end()); 
//         string s = ""; 
//         s.reserve(n); 
//         for (int i = 0; i < n; i++) { 
//             int li = v[i].first; 
//             int ri = v[i].second; 
//             if (li < ri) { 
//                 int lower = lower_bound(unique_fixed.begin(), unique_fixed.end(), li) - unique_fixed.begin(); 
//                 int upper = upper_bound(unique_fixed.begin(), unique_fixed.end(), ri) - unique_fixed.begin(); 
//                 int fix_no = upper - lower; 
//                 int size = ri - li + 1; 
//                 if (fix_no < size) s += '1'; 
//                 else s += '0'; 
//             } else { 
//                 int v = li; 
//                 if (count_v[v] <= 1) s += '1'; 
//                 else s += '0'; 
//             } 
//         } 
//         cout << s << "\n"; 
//         for (auto ele : freq_fixed) count_v[ele.first] -= ele.second; 
//     } 
// }


// #include <bits/stdc++.h> 
// using namespace std;
// #define int long long

// int32_t main() { 
//     ios::sync_with_stdio(false); 
//     cin.tie(0); 
//     int t; 
//     cin >> t;

//     while (t--) { 
//         int n; 
//         cin >> n; 
//         vector<pair<int, int>> v(n);
//         vector<int> cnt(10e7, 0); 
//         for (auto &ele : v) {
//             cin >> ele.first >> ele.second;
//             if (ele.first == ele.second) {
//                 cnt[ele.first]++;
//             }
//         }

//         string ans(n, '0');

//         for (int i = 0; i < n; i++) { 
//             int li = v[i].first, ri = v[i].second;
//             if (li < ri) {
//                 int fix_no = 0;
//                 for (int j = li; j <= ri; ++j) {
//                     if (cnt[j] > 0) {
//                         fix_no++;
//                     }
//                 }
//                 int range_size = ri - li + 1;
//                 if (fix_no < range_size) {
//                     ans[i] = '1'; 
//                 }
//             } else {
//                 if (cnt[li] == 1) {
//                     ans[i] = '1';
//                 }
//             }
//         }
//         cout << ans << "\n";
//         for (auto &ele : v) {
//             if (ele.first == ele.second) {
//                 cnt[ele.first]--;
//             }
//         }
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        vector<pair<int, int>> ranges(n);
        vector<int> fixed_count(400005, 0);  // To track fixed values' counts
        
        // Step 1: Read ranges and count fixed values
        for (auto &p : ranges) {
            cin >> p.first >> p.second;
            if (p.first == p.second) {
                fixed_count[p.first]++;  // Count fixed value
            }
        }
        
        string result(n, '0');  // Initialize result string
        
        // Step 2: Process each range
        for (int i = 0; i < n; i++) {
            int li = ranges[i].first, ri = ranges[i].second;
            
            if (li < ri) {
                int num_fixed = 0;
                for (int v = li; v <= ri; ++v) {
                    num_fixed += fixed_count[v];  // Count how many fixed values are in the range [li, ri]
                }
                if (num_fixed < (ri - li + 1)) {
                    result[i] = '1';  // Unique value is possible in the range
                }
            } else {
                // For fixed value impressions, check if it's unique
                if (fixed_count[li] == 1) {
                    result[i] = '1';  // Unique because no duplicate fixed value
                }
            }
        }

        // Output the result for this test case
        cout << result << "\n";
        
        // Step 3: Reset fixed counts for this test case
        for (auto &p : ranges) {
            if (p.first == p.second) {
                fixed_count[p.first]--;
            }
        }
    }
    
    return 0;
}
