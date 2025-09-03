//Time Complexity - O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int k = 0; // slow pointer
    for (int j = 1; j < n; j++) { // fast pointer
        if (arr[k] != arr[j]) {
            arr[k + 1] = arr[j];
            k++;
        }
    }

    cout << "Unique elements count = " << k + 1 << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i <= k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
