#include <iostream>
using namespace std;

void swapElements(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j]>arr[j+1]) {
                swapElements(arr, j, j + 1);
            } else {
                break;
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
