#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    int n = s.length();
    int pref[n+1][26];
    int idx[n+1];
    vector<pair<int,int>> a(q);
    for(auto &p : a){
        cin >> p.first >> p.second;
        p.first--;
        p.second--;
    }
    vector<int> b(n);
    for(int i = 0;i<n;i++){
        cin >> b[i];
        idx[b[i]-1] = i+1;
    }
    int l = 0,r = n;
    while(l < r){
        int mid = (l+r) / 2;
        memset(pref[0],0,sizeof pref[0]);
        for(int i = 1;i<=n;i++){
            for(int j = 0;j<26;j++)pref[i][j] = pref[i-1][j];
            if(idx[i-1] <= mid)continue;
            pref[i][s[i-1] - 'a']++;
        }
        int valid = 1;
        for(auto p : a){
            for(int i = 0;i<26;i++){
                if(pref[p.second + 1][i] - pref[p.first][i] > 1 )valid = 0;
            }
        }
        if(valid){
            r = mid;
        }
        else l = mid + 1;
    }
    cout << (l+r) / 2 << endl;
}