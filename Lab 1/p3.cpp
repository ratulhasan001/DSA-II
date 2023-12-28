#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector < int > ans;
    for(int i = 1; i < n - 1; i++) {
        if(a[i] < a[i - 1] and a[i] < a[i + 1]) ans.push_back(a[i]);
    }
    for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << " ";

    return 0;
}