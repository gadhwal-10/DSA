// time complexity - o(log n)


#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = digitCount(n);
    cout << "Number of digits: " << result << endl;
    return 0;
    
}



