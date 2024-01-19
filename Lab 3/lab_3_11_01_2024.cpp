#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack < string > first;
    stack < string > second;
    int n;
    cin >> n; // 10
    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        first.push(x);
        second.push(x);
    }
    while(!first.empty()) {
        cout << first.top() << " ";
        first.pop();
    }
    cout << '\n';
    int x ;
    cin >> x;
    for(int i = 0; i < x; i++) second.pop();
    cout << second.top();
    cout << (second.empty() ? "YES" : "NO") << '\n';
    
    return 0;
}