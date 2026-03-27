#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort algorithm - compares adjacent elements and swaps them if needed
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    // Outer loop: controls number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop: compares adjacent elements and performs swaps
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    // Display original array
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
    
    // Sort the array
    bubbleSort(arr);
    
    // Display sorted array
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
    
    return 0;
}