#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, x;
    cin >> n; cin >> x;

    vector<ll> weights;
    for (int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        weights.push_back(input);
    }

    sort(weights.begin(), weights.end()); 

    int marker = n - 1; 
    int count = 0;     
    for (int i = 0; i < n; i++) {
        ll tolerance = x - weights[i]; 

        if (marker <= i) {
            break;
        }

        if (weights[i] > ((float) 0.5 * x)) {
            break;
        } 

        for (int j = marker; j >= 0; j--) {
            if (weights[j] <= tolerance) {
                marker = j - 1; 
                count++;
                break;
            }
        }
    }

    cout << n - count;

    return 0;
}