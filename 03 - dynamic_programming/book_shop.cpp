#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;
    ll x; cin >> x;
    set<ll> expensive;

    vector<ll> prices(n);
    for (int i = 0; i < n; i++) {
        ll price; cin >> price;
        prices[i] = price;
        if (price > x) {
            expensive.insert(i);
        }
    }

    vector<ll> pages(n);
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        pages[i] = input;
    }

    vector<pair<ll,ll>> books;
    for (int i = 0; i < n; i++) {
        if (!expensive.contains(i)) {
            books.push_back({prices[i], pages[i]});
        }
    }

    vector<ll> max_pages(x+1, 0);
    for (int i = 0; i < books.size(); i++) {
        pair<ll,ll> curr = books[i];
        ll price = curr.first;
        ll page = curr.second;
        for (int j = x; j >= price; j--) {
            max_pages[j] = max(max_pages[j], max_pages[j-price] + page); 
        }
    }

    cout << max_pages[x];

    return 0;
}