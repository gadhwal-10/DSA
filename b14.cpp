//Time Complexity - O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter number you want to find: ";
    cin >> k;

    int index = -1; 
    for (int i = 0; i < n; i++) {
        if (nums[i] == k) {
            index = i;   
            break;       
        }
    }

    if (index != -1)
        cout << "Your number is at index " << index << endl;
    else
        cout << "Number not found in array." << endl;

    return 0;
}
