#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        string s; cin >> s;
        if((int)s.size()&1 or s[0]==')' or s[0]=='}' or s[0]==']') {
            cout<<"NO"<<'\n';
            continue;
        } 
        stack < char > c;
        for(int i=0; i<(int)s.size(); i++) {
            if(c.empty()) c.push(s[i]); 
            
            else if(c.top()=='(' and s[i]==')') {
                c.pop();
            }
            else if(c.top()=='{' and s[i]=='}') {
                c.pop();
            }
            else if(c.top()=='[' and s[i]==']') {
                c.pop();
            }
            else c.push(s[i]);

        }
        (c.empty())? cout<<"YES\n":cout<<"NO\n";
    
    }
    return 0;
}