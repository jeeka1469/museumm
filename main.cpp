#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    
    // Read the number of elements in the real-time updates section
    cin >> m;
    vector<int> arr(m);
    
    // Read the sorted elements of the real-time updates section
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }

    // Read the number of elements in the historical data section
    cin >> n;
    vector<int> Arr(n);

    // Read the sorted elements of the historical data section
    for (int i = 0; i < n; ++i) {
        cin >> Arr[i];
    }
    
    // Merging the two sorted arrays
    vector<int> merged;
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr[i] <= Arr[j]) {
            merged.push_back(arr[i]);
            i++;
        } else {
            merged.push_back(Arr[j]);
            j++;
        }
    }

    // Add remaining elements from arr if any
    while (i < m) {
        merged.push_back(arr[i]);
        i++;
    }

    // Add remaining elements from Arr if any
    while (j < n) {
        merged.push_back(Arr[j]);
        j++;
    }

    // Print the merged sorted array
    for (int k = 0; k < merged.size(); ++k) {
        cout << merged[k] << " ";
    }

    cout << endl;

    return 0;
}
