#include <bits/stdc++.h>
using namespace std;

bool ok(string x, string y) {
  if (x.find(y) != string::npos) return true;
  return false;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    cin >> x >> y;
    cout << (ok(x, y) ? "TRUE" : "FALSE") << '\n';
    
    return 0;
}