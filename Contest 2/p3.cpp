#include <bits/stdc++.h>
using namespace std;


int main() {
    string s,p;
    getline(cin,s);
    cin >> p;
    reverse(s.begin(),s.end());
    int n = s.size(),m = p.size();
    for(int i = 0;i<n-m;i++){
        if(s.substr(i,m) == p){
            cout << n - i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}