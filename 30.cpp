//binary searching
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid =(low + high)/ 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1; // Target element not found
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 9, 11, 14, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target = 7;
    int index = binarySearch(arr, 0, size - 1, target);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array" << endl;
    
    return 0;
}
