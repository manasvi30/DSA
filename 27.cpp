#include <iostream>
using namespace std;

// Function to merge two sorted subarrays into a single sorted array
void merge(int A[], int l, int m, int r) {
    int n1 = m - l + 1;  // Size of the left subarray
    int n2 = r - m;      // Size of the right subarray

    // Create temporary arrays for the left and right subarrays
    int L[n1], R[n2];

    // Copy data to the temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

    // Merge the temporary arrays back into A[l..r]
    int i = 0;  // Index for the left subarray
    int j = 0;  // Index for the right subarray
    int k = l;  // Index for the merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of the left subarray, if any
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of the right subarray, if any
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergeSort(int A[], int l, int r) {
    if (l < r) {
        int m = (l+r)/ 2;  // Find the middle index

        // Recursively divide the array into two halves
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);

        // Merge the sorted halves
        merge(A, l, m, r);
    }
}

int main() {
    int arr[] = {5, 6, 7, 8, 3, 2, 11, 2, 5, 1, 77, 89, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, size - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
