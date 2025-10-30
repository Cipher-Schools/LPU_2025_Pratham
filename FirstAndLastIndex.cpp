#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter number to find: ";
    cin >> key;

    int firstIndex = -1, lastIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (firstIndex == -1) {
                firstIndex = i;   
            }
            lastIndex = i;       
        }
    }

    if (firstIndex == -1) {
        cout << "Number not found";
    } else {
        cout << "First Index = " << firstIndex << endl;
        cout << "Last Index = " << lastIndex;
    }

    return 0;
}
