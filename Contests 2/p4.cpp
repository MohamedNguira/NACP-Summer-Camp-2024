#include <bits/stdc++.h>
using namespace std;

long long solve(long long d, int k , int l){
    if(d == 0)return 0;
    int jump = k - l;
    int res = 0;
    if(jump >= l - 1){
        res += d / jump;
        d %= jump;
    }else {
        res += d / (l-1);
        d %= l-1;
    }
    if(d)res++;
    return res;
}
int main() {
    double x1,x2,y1,y2,k,l;

    cin >> x1 >> y1 >> k >> x2 >> y2 >> l;

    cout << solve(abs(x1 - x2),k,l) + solve(abs(y1 - y2),k,l);
}