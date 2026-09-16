#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;
    vector<ll> a; vector<ll> b;

    if (n % 4 == 3) {
        a.push_back(1); a.push_back(2); b.push_back(3);
        for (int i = 3; i < n; i += 4) {
            a.push_back(i+1); a.push_back(i+4);
            b.push_back(i+2); b.push_back(i+3);
        }
    } else if (n % 4 == 0) {
        for (int i = 0; i < n; i += 4) {
            a.push_back(i+1); a.push_back(i+4);
            b.push_back(i+2); b.push_back(i+3);
        }
    } else {
        cout << "NO";
        return 0;
    }

    cout << "YES" << "\n";

    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    } cout << "\n";
    cout << b.size() << "\n";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }

    return 0;
}