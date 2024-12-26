#include <iostream>
#include <vector>
using namespace std;

int countNonZeroWindows(const vector<int>& arr) {
    int count = 0; // To count the number of windows
    bool inWindow = false; // To track if we are inside a non-zero window

    for (int num : arr) {
        if (num != 0) {
            // If we encounter a non-zero and not already in a window, start a new window
            if (!inWindow) {
                inWindow = true;
                count++;
            }
        } else {
            // If we encounter a zero, end the current window
            inWindow = false;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {0, 0 ,0, 0};
    int windows = countNonZeroWindows(arr);
    cout << "Number of non-zero windows: " << windows << endl;
    return 0;
}
