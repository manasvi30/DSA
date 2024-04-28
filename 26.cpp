//quick sort 
#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to rearrange the array
int partition(int A[], int l, int r) {
    int p = A[l];
    int x = l ;
    int y = r;

    while (x <= y) {
        if (A[x] <= p)
            x++;
        else if (A[y] > p)
            y--;
        else
            swap(A[x], A[y]);
    }

    swap(A[l], A[y]);
    return y;
}

// Quick sort function
void quickSort(int A[], int l, int r) {
    if (l < r) {
        int p = partition(A, l, r);
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, r);
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

    quickSort(arr, 0, size - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
