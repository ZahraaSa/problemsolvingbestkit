#include <bits/stdc++.h>

using namespace std;

struct DSU {
    vector<int> parent;
    vector<int> size;
    vector<bool> is_valid; 

    DSU(int n) {
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n + 1, 1);
        is_valid.assign(n + 1, true); 
    }

    int find(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find(parent[v]);
    }

    void union_sets(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            is_valid[a] = is_valid[a] && is_valid[b]; 
        }
    }

};
