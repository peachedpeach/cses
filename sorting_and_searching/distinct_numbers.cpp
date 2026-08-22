#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    set<ll> s;       

    ll curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        s.insert(curr);
    }

    cout << s.size();

    return 0;
}