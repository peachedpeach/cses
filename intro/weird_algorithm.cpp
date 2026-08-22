#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    while (true) {
        cout << n;
        cout << " ";

        if (n == 1) {
            break;
        }

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }

    return 0;
}