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

    int cnt = 0;
    int temp = x;

    while (temp != 0) {
        cnt++;
        temp = temp / 10;
    }

    int sum = 0;
    temp = x;

    while (temp != 0) {
        int lastdigit = temp % 10;
        sum = sum + pow(lastdigit, cnt);
        temp = temp / 10;
    }

    if (sum == x) {
        cout << x << " is an Armstrong number " << endl;
    } else {
        cout << x << " is NOT an Armstrong number " << endl;
    }

    return 0;
}
