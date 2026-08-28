#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, m; cin >> n; cin >> m;

    multiset<ll> prices;
    for (int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        prices.insert(input);
    }

    vector<ll> sales;
    for (int i = 0; i < m; i++) {
        ll customer;
        cin >> customer;
        auto it = prices.upper_bound(customer);

        if (it == prices.begin()) {
            sales.push_back(-1);
        } else {
            --it;
            ll sale = *it;
            sales.push_back(sale);
            prices.erase(it);
        }
    }

    for (int i = 0; i < m; i++) {
        cout << sales[i];
        cout << "\n";
    }
    
    return 0;
}