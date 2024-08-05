#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i=1; i<s.size(); ++i) {
        if (s.substr(i-1,4)!="bull") cout << s[i];
    }
}