//Time Complexity - O(2n)

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

    cout << "Enter no. of place to reverse: ";
    cin >> k;

    k = k % n;  

    reverse(nums.begin(), nums.end());

 
    reverse(nums.begin(), nums.begin() + k);

 
    reverse(nums.begin() + k, nums.end());

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
