/*Write a C++ program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false*/
#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector < int > v(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    bool ok = true;
    for(int i = 0; i < n - 1; i++) {
       if(v[i + 1] - v[i] == 1) continue;
       else {
        ok = false;
        break;
       } 
    }
    cout << (ok ? "TRUE" : "FALSE") << '\n';
    return 0;
}