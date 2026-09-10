#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n; cin >> n;

    vector<ll> coins;
    for (int i = 0; i < n; i++) {
        ll input; cin >> input;
        coins.push_back(input);
    }

    sort(coins.begin(), coins.end());

    ll possible = 0;
    for (int i = 0; i < n; i++) {
        ll coin = coins[i];
        if (possible + 1 < coin) {
            break;
        } else {
            possible += coin;
        }
    }

    cout << possible + 1;

    /* too slow
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> minHeap;
    minHeap.push({coins[0], 0});
    ll prev = 0;

    while (minHeap.size() > 0) {
        pair<ll, ll> curr = minHeap.top(); minHeap.pop();
        ll sum = curr.first; ll index = curr.second;
        if (sum - prev > 1) {
            cout << prev + 1;
            break;
        }

        if (index < n-1) {
            minHeap.push({sum - coins[index] + coins[index+1], index+1});
            minHeap.push({sum + coins[index+1], index+1});
        }

        prev = sum;
    }
    */
}