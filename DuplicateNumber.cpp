#include <iostream>
#include <cmath>
using namespace std;

int findDuplicate(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int val = abs(nums[i]);
        int idx = val - 1;

        if (nums[idx] < 0) {
            return idx + 1;   
        }
        nums[idx] = -1 * nums[idx]; 
    }
    return -1;  // no duplicate
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int nums[100]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int dup = findDuplicate(nums, n);
    if (dup != -1)
        cout << "Duplicate number: " << dup << endl;
    else
        cout << "No duplicate found" << endl;

    return 0;
}
