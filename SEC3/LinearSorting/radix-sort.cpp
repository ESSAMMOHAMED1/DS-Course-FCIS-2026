#include <iostream>
#include <vector>
using namespace std;

// Function to get the maximum number of digits
int getMaxDigits(vector<int>& arr) {
    int maxNum = arr[0];
    for (int num : arr) {
        if (num > maxNum)
            maxNum = num;
    }
    
    int digits = 0;
    while (maxNum > 0) {
        digits++;
        maxNum /= 10;
    }
    return digits;
}

// Counting sort based on digit at position (10^exp)
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0);
    
    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }
    
    // Convert count to cumulative positions
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    
    // Build output array by placing elements in correct positions
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    
    // Copy sorted output back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Main radix sort function
void radixSort(vector<int>& arr) {
    int maxDigits = getMaxDigits(arr);
    
    // Sort by each digit position from least significant to most significant
    for (int exp = 1; maxDigits > 0; exp *= 10, maxDigits--) {
        countingSort(arr, exp);
    }
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 2, 802, 24, 2, 66};
    
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    
    radixSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    
    return 0;
}