#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x < 0) {
        cout << "Enter positive number";
        return 0;
    }

    int rev = 0;
    int dup = x;

    while (x != 0) {
        int lastdigit = x % 10;
      
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastdigit > 7)) {
            cout << "Overflow occurred!";
            return 0;
        }

        rev = rev * 10 + lastdigit;
        x = x / 10;
    }

    cout << "Reversed number: " << rev << endl;

    if (rev == dup) {
        cout << "Yes, it's a palindrome";
    } else {
        cout << "No, it's not a palindrome";
    }

    return 0;
}
