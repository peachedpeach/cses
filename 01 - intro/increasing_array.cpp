#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long output = 0;
    
    long long curr;
    long long prev;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr < prev) {
            output += prev - curr;
        } else {
            prev = curr;
        }
    }

    cout << output;
    return 0;
}