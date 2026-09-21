#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    unordered_map<char,ll> count;
    string input; cin >> input; ll n = input.size();

    for (const char& c : input) {
        if (count.contains(c)) {
            count[c]++;
        } else {
            count[c] = 1;
        }

    }
    
    vector<char> output(n);
    ll index = 0;
    ll odd = 0;
    char mid_char;
    ll mid_count = 0;
    for (const auto& [key, value] : count) {
        if (value % 2 == 1) {
            odd++;
            if (odd > 1) {
                cout << "NO SOLUTION";
                return 0;
            }
            mid_char = key;
            mid_count = value;
            continue;
        } 

        int i = 0;
        while (i < value / 2) {
            output[index+i] = key;
            output[n-1 - index - i] = key;
            i++;
        }
        index += value / 2;
    }

    if (mid_count > 0) {
        for (int i = index; i < index + mid_count; i++) {
            output[i] = mid_char;
        }
    }

    string ree(output.begin(), output.end());

    cout << ree;

    return 0;
}