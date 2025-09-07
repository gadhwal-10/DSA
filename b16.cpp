//Time Complexity - O(n)

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

   int maximum=0;
   int cnt =0;


    for (int i = 0; i < n; i++) {
    	
        if (nums[i] == 1) {
            cnt++;   
            maximum=max(maximum,cnt);       
        }
        else{
        	cnt=0;
		}
    }
   cout<<maximum;

    return 0;
}
