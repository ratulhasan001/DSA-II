// Remove the last K digits of a number using stack

#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    stack < int > s;
    while(n) {
        int rem = n % 10;
        s.push(rem);
        n /= 10;
    }
    stack < int > second;
    while(!s.empty()) {
        second.push(s.top());
        s.pop();
    }
    for(int i = 0; i < x; i++) second.pop();
    while(!second.empty()) {
        s.push(second.top());
        second.pop();
    }
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    
    return 0;
}