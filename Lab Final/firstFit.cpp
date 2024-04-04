#include <bits/stdc++.h>
using namespace std;

vector < int > firstfit(const vector < int > &items, int binSize)
{
    vector < int > bins;
    bins.push_back(binSize);
    for(int item : items)
    {
        bool placed = false;
        for(int i = 0; i < bins.size(); i++)
        {
            if(bins[i] >= item)
            {
                bins[i] -= item;
                placed = true;
                break;
            }
        }
        if(!placed) bins.push_back(binSize-item);
    }
    return bins;
}

int main()
{

    int number_of_items;
    cin >> number_of_items;
    vector < int > items(number_of_items);
    for(int i = 0; i < number_of_items; i++)
    {
        cin >> items[i];
    }
    int bin_size;
    cin >> bin_size;

    vector<int> bins = firstfit(items, bin_size);
    cout << bins.size() << '\n';
    for(int i = 0; i < bins.size(); i++) cout << bins[i] << " ";
    
    return 0;
}
