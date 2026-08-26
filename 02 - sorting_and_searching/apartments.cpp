#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, m, k;
    cin >> n; cin >> m; cin >> k;

    vector<ll> requests;
    for (int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        requests.push_back(input);
    }

    vector<ll> sizes;
    for (int i = 0; i < m; i++) {
        ll input;
        cin >> input;
        sizes.push_back(input);
    }

    sort(requests.begin(), requests.end());
    sort(sizes.begin(), sizes.end());    

    int counter = 0;
    int marker = 0;
    for (int i = 0; i < m; i++) {
        for (int j = marker; j < n; j++) {
            if (requests[j] >= sizes[i] - k && requests[j] <= sizes[i] + k) {
                marker = j + 1;
                counter++;
                break;
            } else if (requests[j] > sizes[i] + k) {
                marker = j;
                break;
            }
        }
    }

    cout << counter;

    return 0;
}
