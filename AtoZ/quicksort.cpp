#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int l, int h) {
    int p = a[l];
    int start = l;
    int end = h;
    
    while (start < end) {
        while (start <= h && a[start] <= p) start++;
        while (end >= l && a[end] > p) end--;
        if (start < end) swap(a[start], a[end]);
    }
    
    swap(a[l], a[end]);
    return end;
}

void quick(vector<int>& a, int l, int h) {
    if (l < h) {
        int q = partition(a, l, h);
        quick(a, l, q - 1);
        quick(a, q + 1, h);
    }
}

int main() {
    vector<int> a = {10, 7, 8, 9, 1, 5};
    quick(a, 0, a.size() - 1);
    for (int x : a) cout << x << " ";
    return 0;
}
