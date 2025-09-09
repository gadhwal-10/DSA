//Time Complexity O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";  
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int j = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
        return 0;
    }

    for (int i = j + 1; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}
