#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a(1000001);
long long st[1000001];
int mn(int idx, int tl, int tr, int ql, int qr) {
    if(tl > qr || tr < ql) {
        return INT_MAX;
    }
    if(ql <= tl && tr <= qr) {
        return st[idx];
    }
    int tm = (tl+tr)/2;
    int x = mn(2*idx, tl, tm, ql, qr);
    int y = mn(2*idx+1, tm+1, tr, ql, qr);
    return min(x, y);
}
void stroene(int idx, int tl, int tr) {
    if(tl == tr) {
        st[idx] = a[tl];
        return;
    }
    int tm  = (tl+tr)/2;
    stroene(2*idx, tl, tm);
    stroene(2*idx+1, tm+1, tr);
    st[idx] = min(st[idx*2], st[idx*2+1]);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    char z;
    for (long long i = 1; i <= n; i++) {
        cin >> z;
        a[i] = a[i-1] + (z == '(') - (z == ')');
    }
    stroene(1, 1, n);
    cin >> m;
    string s;
    long long l, r;
    for (long long i = 0; i < m; i++) {
        cin >> l >> r;
        if (a[r] - a[l-1] == 0 && mn(1, 1, n, l, r) - a[l-1] >= 0) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
