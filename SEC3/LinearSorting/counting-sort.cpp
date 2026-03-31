


// count = array of k+1 zeros

// for x in input do

//     count[key(x)] += 1

// total = 0

// for i in 0, 1, ... k do
//     count[i], total = total, count[i] + total

// output = array of the same length as input

// for x in input do
//     output[count[key(x)]] = x
//     count[key(x)] += 1 

// return output








#include <iostream>
#include <vector>
using namespace std;

// Counting Sort - sorts array by counting occurrences of each value
void countingSort(vector<int>& arr) {
    // Handle empty array
    if (arr.empty()) return;
    
    // Find the maximum element to determine range
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    
    // Create a count array to store frequency of each element
    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);
    
    // Count occurrences of each element
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i] - minVal]++;
    }
    
    // Modify count array - each index stores cumulative count
    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }
    
    // Build output array by placing elements in correct positions
    vector<int> output(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--) {
        int index = count[arr[i] - minVal] - 1;
        output[index] = arr[i];
        count[arr[i] - minVal]--;
    }
    
    // Copy sorted elements back to original array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}

// Main function - test the counting sort
int main() {
    vector<int> arr = {4, 2, 8, 3, 3, 5, 2, 1};
    
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    countingSort(arr);
    
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}