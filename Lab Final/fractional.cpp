#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b) {
    double r1 = (double)a.first / (double)a.second;
    double r2 = (double)b.first / (double)b.second;
    return r1 > r2;
}

double fractionalKnapsack(int W, vector<pair<int, int>>& items) {
 
    sort(items.begin(), items.end(), cmp);

    double finalvalue = 0.0;

    for (auto& item : items) {
        
        if (item.second <= W) {
            W -= item.second;
            finalvalue += item.first;
        }

        else {
            finalvalue += item.first * ((double)W / (double)item.second);
            break;
        }
    }

    return finalvalue;
}

// Driver code
int main()
{
    int W = 50;
    vector<pair<int, int>> items = { { 60, 10 }, { 100, 20 }, { 120, 30 } };

    cout << fractionalKnapsack(W, items);
    return 0;
}
