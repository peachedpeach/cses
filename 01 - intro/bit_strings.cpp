#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll modulo = 1e9 + 7;
ll maximum = numeric_limits<ll>::max() / 2 - 1;

int main() {
    ll n; cin >> n;

    ll curr = 1;
    for (int i = 1; i <= n; i++) {
        if (curr > maximum) {
            curr %= modulo;
        }
        curr *= 2;
    }

    cout << curr % modulo;

    return 0;
}