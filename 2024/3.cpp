// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void bhu(int lo, int hi, int k, int &val) {
//     if (hi - lo + 1 < k) return;

//     if ((hi - lo + 1) % 2) {
//         int m = (lo + hi) / 2;
//         val = val + m;
//         bhu(lo, m - 1, k, val);
//         bhu(m + 1, hi, k, val);
//     } else {
//         int m = (lo + hi) / 2;
//         bhu(lo, m, k, val);
//         bhu(m + 1, hi, k, val);
//     }
// }

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     int val = 0;
//     bhu(1, n, k, val);
//     cout << val << endl; 
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t; 
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     int val = 0;
//     //use pq
//     queue<pair<int, int>> pq;
//     pq.push({1, n});
    
//     while (!pq.empty()) {
//         auto ele= pq.front();
//         int l=ele.first;
//         int r=ele.second;
//         pq.pop();
//         //base case
//         if (r - l + 1 < k) {
//             continue;
//         }

//         if ((r - l + 1) % 2) {
//             int m = (l + r) / 2;
//             val = val + m;
            
//             pq.push({l, m - 1});
//             pq.push({m + 1, r});
//         } else {
//             int m = (l + r) / 2;
//             pq.push({l, m});
//             pq.push({m + 1, r});
//         }
//     }
    
//     cout << val << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;  
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;
    
//     int lucky_value = 0;
//     // Start by considering the whole segment [1, n]
//     deque<pair<int, int>> segments;
//     segments.push_back({1, n});
    
//     while (!segments.empty()) {
//         auto ele = segments.front();
//         int l=ele.first;
//         int r=ele.second;
//         segments.pop_front();
        
//         if (r - l + 1 < k) {
//             continue;  // Ignore segments smaller than k
//         }

//         int mid = (l + r) / 2;
        
//         // If the segment length is odd, add the middle value to the lucky value
//         if ((r - l + 1) % 2 == 1) {
//             lucky_value += mid;
//         }

//         // Split the segment into two parts
//         if (mid - 1 >= l) {
//             segments.push_back({l, mid - 1});
//         }
//         if (mid + 1 <= r) {
//             segments.push_back({mid + 1, r});
//         }
//     }

//     cout << lucky_value << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;
    
//     int lucky_value = 0;

//     // Stack to simulate recursion
//     stack<pair<int, int>> segments;
//     segments.push({1, n});
    
//     while (!segments.empty()) {
//         auto ele = segments.top();
//         int l=ele.first;
//         int r=ele.second;
//         segments.pop();
        
//         if (r - l + 1 < k) {
//             continue;  // Ignore segments smaller than k
//         }

//         int mid = (l + r) / 2;
        
//         // If the segment length is odd, add the middle value to the lucky value
//         if ((r - l + 1) % 2 == 1) {
//             lucky_value += mid;
//         }

//         // Split the segment into two parts
//         if (mid - 1 >= l) {
//             segments.push({l, mid - 1});
//         }
//         if (mid + 1 <= r) {
//             segments.push({mid + 1, r});
//         }
//     }

//     cout << lucky_value << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     int lucky_value = 0;

//     // Deque to simulate recursion (access from both ends)
//     deque<pair<int, int>> segments;
//     segments.push_back({1, n});  // Initialize the deque with the first segment [1, n]

//     while (!segments.empty()) {
//         // Access the front element of the deque
//         auto ele = segments.front();
//         segments.pop_front();
//         int l = ele.first;
//         int r = ele.second;

//         // If the segment length is smaller than k, we don't process it
//         if (r - l + 1 < k) {
//             continue;
//         }

//         // Calculate the middle point
//         int mid = (l + r) / 2;

//         // If the segment length is odd, add the middle to lucky_value
//         if ((r - l + 1) % 2 == 1) {
//             lucky_value += mid;
//         }

//         // Split into two parts: [l, mid-1] and [mid+1, r]
//         if (mid - 1 >= l) {
//             segments.push_back({l, mid - 1});
//         }
//         if (mid + 1 <= r) {
//             segments.push_back({mid + 1, r});
//         }
//     }

//     // Output the final lucky value
//     cout << lucky_value << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
unordered_map<string, int> dp;  

int getLuckyValue(int l, int r, int k) {
    if (r - l + 1 < k) {
        return 0;
    }

    // Check if this segment has already been computed
    string key = to_string(l) + "," + to_string(r);
    if (dp.find(key) != dp.end()) {
        return dp[key];  // Return the memoized result
    }

    int lucky_value = 0;

    // Calculate the middle point of the segment
    int mid = (l + r) / 2;

    // If the segment length is odd, add the middle value to the lucky value
    if ((r - l + 1) % 2 == 1) {
        lucky_value += mid;
    }

    // Recursively calculate lucky values for the two subsegments
    lucky_value += getLuckyValue(l, mid - 1, k);
    lucky_value += getLuckyValue(mid + 1, r, k);

    // Store the result in the dp table
    dp[key] = lucky_value;

    return lucky_value;
}

void solve() {
    int n, k;
    cin >> n >> k;

    // Clear the memoization map before each test case
    dp.clear();

    // Get the final lucky value for the entire range [1, n]
    int result = getLuckyValue(1, n, k);

    // Output the result
    cout << result << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
