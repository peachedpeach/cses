#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, x; cin >> n; cin >> x;

    vector<ll> denominations;
    vector<ll> answers(x + 1, -1);
    for (int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        denominations.push_back(input);
        if (input <= x) {
            answers[input] = 1;
        }
    }
    
    for (int i = 1; i <= x; i++) {
        if (answers[i] == -1) {
            ll minimum = 10e6 + 1;
            for (int j = 0; j < n; j++) {
                ll curr = i - denominations[j];
                if (curr < 1) {
                    continue;
                } else if (answers[curr] == -1) {
                    continue;
                } else {
                    ll prospective = 1 + answers[curr];
                    minimum = min(prospective, minimum);
                }
            }
            if (minimum <= 10e6) {
                answers[i] = minimum;
            }
        }
    }

    cout << answers.back();

    return 0;
}