#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long

// Function to read input pairs
vector<pair<ll, ll>> readPairs(ll numPairs) {
    vector<pair<ll, ll>> pairs(numPairs);
    for (ll i = 0; i < numPairs; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    return pairs;
}

// Function to create a mapping of unique values to indices
map<ll, ll> createValueMap(const vector<pair<ll, ll>>& pairs) {
    set<ll> uniqueValues;
    for (const auto& p : pairs) {
        uniqueValues.insert(p.first);
        uniqueValues.insert(p.second);
    }
    
    map<ll, ll> valueMap;
    ll index = 1;
    for (const auto& value : uniqueValues) {
        valueMap[value] = index++;
    }
    return valueMap;
}

// Function to prepare the result based on pairs and their mapped indices
vector<array<ll, 3>> prepareResult(const vector<pair<ll, ll>>& pairs, const map<ll, ll>& valueMap) {
    vector<array<ll, 3>> result(pairs.size());
    for (size_t i = 0; i < pairs.size(); ++i) {
        result[i][0] = valueMap.at(pairs[i].first) + valueMap.at(pairs[i].second);
        result[i][1] = pairs[i].first;
        result[i][2] = pairs[i].second;
    }
    return result;
}

// Function to sort results and output them
void sortAndOutputResults(vector<array<ll, 3>>& result) {
    sort(result.begin(), result.end(), [](const array<ll, 3>& a, const array<ll, 3>& b) {
        return a[0] < b[0];
    });

    for (const auto& res : result) {
        cout << res[1] << " " << res[2] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    ll testCases; 
    cin >> testCases;

    while (testCases--) {
        ll numPairs; 
        cin >> numPairs;

        // Read pairs
        vector<pair<ll, ll>> pairs = readPairs(numPairs);

        // Create a mapping of unique values
        map<ll, ll> valueMap = createValueMap(pairs);

        // Prepare the result array
        vector<array<ll, 3>> result = prepareResult(pairs, valueMap);

        // Sort and output the results
        sortAndOutputResults(result);
    }

    return 0;
}
