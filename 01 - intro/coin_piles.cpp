#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t; cin >> t;

    vector<ll> alpha(t);
    vector<ll> beta(t);
    for (int i = 0; i < t; i++) {
        ll temp; 
        cin >> temp; alpha[i] = temp;
        cin >> temp; beta[i] = temp;
    }

    for (int i = 0; i < t; i++) {
        ll a = alpha[i];
        ll b = beta[i];
        if (2 * b >= a && 2 * a >= b && (2*a - b) % 3 == 0 && (2*b - a) % 3 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO"  << "\n";
        }
    }

    return 0;
}