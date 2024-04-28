//selection sort

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int p = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[p]) {
                p = j;
            }
        }
        // Swap the minimum element with the first element of the unsorted part
        int temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, size);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
