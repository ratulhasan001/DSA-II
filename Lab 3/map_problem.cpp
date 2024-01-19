#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map < int, char > mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;
        mp[x] = c;
    }
    int cnt = 0;

    map < char, int > mp2;
    for(auto [x, y] : mp) mp2[y]++;
    for(auto [x, y] : mp2) cout << x << " " << y << '\n';
    
    return 0;
}