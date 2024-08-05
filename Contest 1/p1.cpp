#include <bits/stdc++.h>

using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << fixed << setprecision(6);
    cout << (A + B) / 2 << endl;
    cout << (A + C) / 2 << endl;
    cout << (A + D) / 2 << endl;
    cout << (B + C) / 2 << endl;
    cout << (B + D) / 2 << endl;
    cout << (C + D) / 2 << endl;
    cout << (A + B + C) / 3 << endl;
    cout << (A + B + D) / 3 << endl;
    cout << (A + C + D) / 3 << endl;
    cout << (B + C + D) / 3 << endl;
    cout << (A + B + C + D) / 4 << endl;
    return 0;
}