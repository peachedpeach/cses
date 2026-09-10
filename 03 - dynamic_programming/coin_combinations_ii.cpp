#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll modulo = 1e9 + 7;

int main() {
    ll n, x; cin >> n; cin >> x;

    vector<ll> denominations;
    // unordered_map<ll, set<vector<ll>>> answers;
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        denominations.push_back(input);
    }

    vector<ll> answers(x+1, 0);
    answers[0] = 1;

    for (int i = 0; i < n; i++) {
        ll coin = denominations[i];
        for (int j = coin; j <= x; j++) {
            answers[j] += answers[j-coin];
            if (answers[j] >= modulo) {
                answers[j] -= modulo;
            }
        }
    }

    cout << answers[x];

    /* too slow
    sort(denominations.begin(), denominations.end());
    vector<ll> zero(n,0);
    answers[0].insert(zero);


    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            ll remaining = i - denominations[j];
            if (remaining < 0) {
                // if there are no more coins that are less than current value
                break;
            }

            if (!answers.contains(remaining) || answers[remaining].empty()) {
                // if current there is no way to get to current - coin
                continue;
            }
            
            set<vector<ll>>& solutions = answers[remaining];

            for (const auto& prev : solutions) {
                vector<ll> curr = prev;
                curr[j] += 1;
                answers[i].insert(curr);
            }
        }
    }

    cout << answers[x].size() % modulo;

    */
}