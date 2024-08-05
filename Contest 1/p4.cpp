#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> pos(n+1), vec(n+1);
    for (int i = 1, x; i <= n; i++){
        cin >> x;
        pos[x] = i;
        if (x > pos[x]) vec[pos[x] + n - x]++;
        else vec[pos[x] - x]++;
    }
    while (q--){
        int x, y;
        cin >> x >> y;
        if (x > pos[x]) vec[pos[x] + n - x]--;
        else vec[pos[x] - x]--;
        if (y > pos[y]) vec[pos[y] + n - y]--;
        else vec[pos[y] - y]--;
        swap(pos[x], pos[y]);
        if (x > pos[x]) vec[pos[x] + n - x]++;
        else vec[pos[x] - x]++;
        if (y > pos[y]) {
            if (++vec[pos[y] + n - y] == n){
                cout << "DA\n";
            } else{
                cout << "NE\n";
            }
        }
        else {
            if (++vec[pos[y] - y] == n){
                cout << "DA\n";
            } else {
                cout << "NE\n";
            }
        }
    }
}