#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector < int > v;
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        v.push_back(value);
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
    cout << v.capacity();
    cout << '\n';


    return 0;
}