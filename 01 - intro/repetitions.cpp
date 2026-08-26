#include <bits/stdc++.h>

using namespace std;

int main() {
    string dna;
    cin >> dna;

    long long output = 1;
    long long count = 1;
    char current = dna[0]; 
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == current) { 
            count++; 
        } else {
            current = dna[i];
            count = 1;
        }
        output = max(output,count);
    }

    cout << output;

    return 0;
}