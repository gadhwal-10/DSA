// Time Complexity - O(n) 
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

   int XOR =0;


    for (int i = 0; i < n; i++) {
    	
      XOR=XOR^nums[i];

    }
   cout<<XOR;

    return 0;
}
