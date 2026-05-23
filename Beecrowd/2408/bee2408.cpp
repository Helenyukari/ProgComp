#include<bits/stdc++.h>
using namespace std;


int main() {


    int A, B, C;

    cin >> A >> B >> C;
    int max_val = max({A, B, C});
    int min_val = min({A, B, C});
    cout << (A + B + C) - max_val - min_val << endl;

    return 0;
}