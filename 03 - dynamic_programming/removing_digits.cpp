#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll find_max(vector<ll> buckets) {
    for (ll i = 9; i >= 0; i--) {
        if (buckets[i] > 0) {
            return i;
        }
    }

    return 0;
}

vector<ll> digits(ll n) {
    vector<ll> buckets(10);
    while (n > 0) {
        ll digit = n % 10;
        buckets[digit]++;
        n /= 10;
    }

    return buckets;
}

int main() {
    ll n; cin >> n; ll temp = n;
    vector<ll> buckets = digits(n);
    ll maximum = find_max(buckets);

    ll count = 0;
    while (n > 0) {
        ll last_digit = n % 10;
        if (last_digit > maximum) {
            n -= maximum;
            buckets[last_digit]--;
            buckets[last_digit-maximum]++;
            maximum = find_max(buckets);
        } else {
            n -= maximum;
            buckets = digits(n);
            maximum = find_max(buckets);
        }
        count++;
    }

    cout << count;

    return 0;
}