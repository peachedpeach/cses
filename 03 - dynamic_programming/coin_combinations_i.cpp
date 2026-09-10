#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll modulo = 1e9 + 7;

ll combinations(ll x, vector<ll> &denominations, vector<ll> &answers) {
    // top down approach, too slow
    if (x < 0) {
        return 0;
    } else if (x == 0) {
        return 1;
    } else if (answers[x] > -1) {
        return answers[x];
    } else {
        ll cumsum = 0;
        for (int i = 0; i < denominations.size(); i++) {
            ll remaining = x - denominations[i];
            cumsum += combinations(remaining, denominations, answers);
            cumsum %= modulo;
        }

        answers[x] = cumsum;
        return cumsum;
    }
}

int main() {
    ll n, x; cin >> n; cin >> x;

    vector<ll> denominations;
    vector<ll> answers(x+1, 0);
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        denominations.push_back(input);
    }

    sort(denominations.begin(), denominations.end());
    answers[0] = 1;
    
    // bottom up approach
    for (int i = 1; i <= x; i++) {
        ll sum = 0;
        for (int j = 0; j < n; j++) {
            ll coin = denominations[j];
            if (coin > i) {
                break;
            }

            sum += answers[i - coin];
        }

        answers[i] += sum % modulo;
    }

    cout << answers[x];

    return 0;
}