/*Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.
Example:
Original String elements: Python Py
Check - First string contains all letters from second string: true
*/
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