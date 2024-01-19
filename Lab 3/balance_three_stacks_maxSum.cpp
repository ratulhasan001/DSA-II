//  Balance three stacks so each stack has the same summation of their elements
#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;
using ll = long long;
using pii = pair < int, int >;
template <typename T> using ordered_set = tree<T, null_type, less<T>,
rb_tree_tag,  tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int a, b, c;
    cin >> a >> b >> c;
    int sz[3] = {a, b, c};
    stack < int > s[3];
    vector < int > v[3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < sz[i]; j++) {
            int value;
            cin >> value;
            v[i].push_back(value);
        }
    }
    for(int i = 0; i < 3; i++) {
        reverse(v[i].begin(), v[i].end());
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < v[i].size(); j++) {
            s[i].push(v[i][j]);
        }
    }
    auto getsum = [](stack<int> s) {
        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    };
    int sum1 = getsum(s[0]);
    int sum2 = getsum(s[1]);
    int sum3 = getsum(s[2]);
    while(true) {
        if((sum1 == sum2 and sum2 == sum3)) break;
        if(sum1 >= sum2 and sum1 >= sum3) {
            sum1 -= s[0].top();
            s[0].pop();
        }
        else if(sum2 >= sum1 and sum2 >= sum3) {
            sum2 -= s[1].top();
            s[1].pop();
        }
        else {
            sum3 -= s[2].top();
            s[2].pop();
        }
    }
    cout << sum1 << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}