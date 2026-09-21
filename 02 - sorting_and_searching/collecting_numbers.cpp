#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main() {
    ll n; cin >> n;
    vector<ll> position(n);
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        position[input-1] = i;
    }

    ll count = 0;
    ll prev;
    for (int i = 0; i < n; i++) {
        if (i == 0 || position[i] > prev) {
            prev = position[i];
            continue;
        } 

        prev = position[i];
        count++;
    }

    count++;

    cout << count;

    return 0;
}