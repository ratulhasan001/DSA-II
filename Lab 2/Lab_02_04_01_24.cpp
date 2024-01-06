#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    set < int > s;
    while(q--> 0) {
        int qu;
        cin >> qu;
        int value;
        cin >> value;
        if(qu == 1) {
            s.insert(value);
        } 
        if(qu == 2) {
            auto it = s.find(value);
            if(it == s.end()) continue;
            else {
                s.erase(value);
            }
        }
        if(qu == 3) {
            auto it = s.find(value);
            cout << (it == s.end() ? "No" : "Yes") << '\n';
        }
    }
    
    return 0;
}