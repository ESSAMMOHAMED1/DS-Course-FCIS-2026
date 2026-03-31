#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bucket Sort Algorithm
// Time Complexity: O(n + k) average case, O(n²) worst case
// Space Complexity: O(n + k)
// Best for: Uniformly distributed floating point numbers

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    
    // Edge case: empty or single element array
    if (n <= 1) return;
    
    // Step 1: Create empty buckets
    vector<vector<float>> buckets(n);
    
    // Step 2: Put array elements into different buckets
    // Each bucket holds values in range [i/n, (i+1)/n)
    for (int i = 0; i < n; i++) {
        // Find which bucket this element belongs to
        int bucketIndex = n * arr[i];  // Assumes arr[i] is in range [0, 1)
        buckets[bucketIndex].push_back(arr[i]);
    }
    
    // Step 3: Sort individual buckets using insertion sort
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }
    
    // Step 4: Concatenate all sorted buckets back into original array
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

// Test the bucket sort algorithm
int main() {
    vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    
    cout << "Original array: ";
    for (float num : arr) cout << num << " ";
    cout << "\n";
    
    bucketSort(arr);
    
    cout << "Sorted array: ";
    for (float num : arr) cout << num << " ";
    cout << "\n";
    
    return 0;
}