// QUESTION 12
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        for(int k=0; k<n; k++) {
            cout << i << j << k;
        }
    }
}

// QUESTION 13
// What is the time complexity?
for(int i=n; i>0; i=i/2) {
    cout << i << endl;
}

// QUESTION 14
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j=j+2) {
        cout << i << j << endl;
    }
}

// QUESTION 15
// What is the time complexity?
for(int i=1; i<n; i=i*3) {
    cout << i << endl;
}

// QUESTION 16
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
        for(int k=0; k<p; k++) {
            cout << i << j << k;
        }
    }
}

// QUESTION 17
// What is the time complexity?
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// QUESTION 18
// What is the time complexity?
void bubbleSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// QUESTION 19
// What is the time complexity?
for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
        cout << "*";
    }
    cout << endl;
}

// QUESTION 20
// What is the time complexity?
for(int i=0; i<n; i++) {
    cout << arr[i] << endl;
}

// QUESTION 21
// What is the time complexity?
int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

// QUESTION 22
// What is the time complexity?
int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

// QUESTION 23
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
        cout << arr[i][j];
    }
}

// QUESTION 24
// What is the time complexity?
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

// QUESTION 25
// What is the time complexity?
void printPairs(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

// QUESTION 26
// What is the time complexity?
for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
        if(i == j) continue;
        cout << i << j << endl;
    }
}

// QUESTION 27
// What is the time complexity?
int power(int x, int n) {
    int result = 1;
    for(int i=0; i<n; i++) {
        result *= x;
    }
    return result;
}

// QUESTION 28
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; i<j; j++) {
        cout << i*j << endl;
    }
}

// QUESTION 29
// What is the time complexity?
void nestedLoop(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n/i; j++) {
            cout << i*j << endl;
        }
    }
}

// QUESTION 30
// What is the time complexity?
for(int i=1; i<n; i=i+sqrt(n)) { // Note: i is incremented by sqrt(n) in each iteration
    cout << i << endl; // log(n) iterations approximately, since i grows by sqrt(n) each time 
} 

// QUESTION 31
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
        cout << i+j << endl;
    }
}

// QUESTION 32
// What is the time complexity?
int linearSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

// QUESTION 33
// What is the time complexity?
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        if(i == j) cout << arr[i][j];
    }
}

// QUESTION 34
// What is the time complexity? (Hint: What happens with k*)
int k = 1;
while(k <= n) {
    for(int i=0; i<k; i++) {
        cout << i << endl;
    }
    k = k * 2;
}

// QUESTION 35
// What is the time complexity?
void printDivisors(int n) {
    for(int i=1; i*i<=n; i++) {
        if(n % i == 0) {
            cout << i << endl;
        }
    }
}

// QUESTION 36
// What is the time complexity?
for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
        for(int k=1; k<=p; k++) {
            cout << i << j << k;
        }
    }
}

// QUESTION 37
// What is the time complexity?
int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) count++;
    }
    return count;
}

// QUESTION 38
// What is the time complexity?
for(int i=n-1; i>=0; i--) {
    for(int j=n-1; j>=i; j--) {
        cout << arr[i][j];
    }
}

// QUESTION 39
// What is the time complexity?
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// QUESTION 40
// What is the time complexity?
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    for(int i=0; i<n1; i++) result[i] = arr1[i];
    for(int i=0; i<n2; i++) result[n1+i] = arr2[i];
}
