#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    long long sum = 0;

    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        sum += x;
    }

    long long total = n * (n+1) / 2;
    cout << total - sum;
    
    return 0;
}