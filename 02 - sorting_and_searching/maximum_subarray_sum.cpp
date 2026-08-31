#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;

    vector<ll> array;
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        array.push_back(input);
    }

    ll maximum = array[0];
    ll cumsum = array[0];
    for (int i = 1; i < array.size(); i++) {
        if (array[i] > 0 && cumsum >= 0) {
            cumsum += array[i];
            maximum = max(cumsum, maximum);
        } else if (array[i] > cumsum) {
            cumsum = array[i];
            maximum = max(cumsum, maximum);
        } else {
            cumsum += array[i];
        }
    }

    cout << maximum;

    return 0;
}