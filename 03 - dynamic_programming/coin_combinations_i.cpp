#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll modulo = 1e9 + 7;

ll combinations(ll x, vector<ll> &denominations, vector<ll> &answers) {
    if (x < 0) {
        return 0;
    } else if (x == 0) {
        return 1;
    } else if (answers[x] > -1) {
        return answers[x];
    } else {
        ll cumsum = 0;
        for (int i = 0; i < denominations.size(); i++) {
            ll current = denominations[i];
            if (x < current) {
                continue;
            } else {
                ll remaining = x - current;
                cumsum += combinations(remaining, denominations, answers);
                cumsum %= modulo;
            }
        }

        answers[x] = cumsum;
        return cumsum;
    }
}

int main() {
    ll n, x; cin >> n; cin >> x;

    vector<ll> denominations;
    vector<ll> answers(x+1, -1);
    ll minimum = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        minimum = min(input, minimum);
        denominations.push_back(input);
    }
    answers[minimum] = 1; answers[0] = 1;
    
    cout << combinations(x, denominations, answers);

    return 0;
}