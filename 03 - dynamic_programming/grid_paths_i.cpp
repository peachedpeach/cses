#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll paths[1001][1001];
ll modulo = 1e9 + 7;

int main() {
    ll n; cin >> n;

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            char curr; cin >> curr;
            if (x == 1 && y == 1 && curr == '.') {
                paths[x][y] = 1;
                continue;
            } 
            if (curr == '*') {
                paths[x][y] = 0;
            } else {
                ll sum = paths[x-1][y] + paths[x][y-1];
                if (sum >= modulo) {
                    sum %= modulo;
                }
                paths[x][y] = sum;
            }
        }
    }

    cout << paths[n][n];

    return 0;
}