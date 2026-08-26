#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll num(ll x, vector<ll> &answers) {
    if (answers[x] > 0) {
        return answers[x];
    }

    if (x <= 6) {
        return 1LL << (x-1);
    }

    ll sum = 0;
    for (ll i = 1; i <= 6; i++) {
        sum += num(x-i, answers);
        sum %= (ll) 1e9 + 7;
    }

    answers[x] = sum;
    return sum;
}

int main() {
    ll n; cin >> n;
    vector<ll> answers(n + 1);

    cout << num(n, answers);
    return 0;
}