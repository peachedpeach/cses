#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;

    ll wu = 0;
    for (ll i = 5; i <= n; i*=5) {
        wu += n / i;
    }

    cout << wu;

    return 0;
}