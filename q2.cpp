#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
  int rev = 0;
      while (x != 0) {
            int lastdigit = x % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastdigit > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastdigit < -8)) return 0;
            rev = rev * 10 + lastdigit;
            x = x / 10;
        } 
    cout<<"reversve "<< rev;
    return 0;
}


