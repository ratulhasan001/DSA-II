#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int left, int mid, int right) {
    int left_size = mid - left + 1, right_size = right - mid;
    int left_array[left_size], right_array[right_size];
    
    int k = 0;
    for(int i = left; i <= mid; i++) {
        left_array[k] = a[i];
        k++;
    }
    k = 0;
    for(int i = mid + 1; i <= right; i++) { 
        right_array[k] = a[i];
        k++;
    }
    
    int i = 0, j = 0;
    int now = left;
    
    while(i < left_size and j < right_size) {
        if(left_array[i] <= right_array[j]) {
            a[now] = left_array[i];
            i++;
        }
        else {
            a[now] = right_array[j];
            j++;
        }
        now++;
    }

    while(i < left_size) {
        a[now] = left_array[i];
        i++;
        now++;
    }
    
    while(j < right_size) {
        a[now] = right_array[j];
        j++;
        now++;
    }
}

void merge_sort(int a[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    merge_sort(a, 0, n - 1);
    
    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}
