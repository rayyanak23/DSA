//3600. Maximize Spanning Tree Stability with Upgrades

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
class Solution {
public:
    int n_;
    vector<int> par, rnk;
    
    int find(int x) {
        if (par[x] != x) par[x] = find(par[x]);
        return par[x];
    }
    
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (rnk[a] < rnk[b]) swap(a, b);
        par[b] = a;
        if (rnk[a] == rnk[b]) rnk[a]++;
        return true;
    }
    
    bool canAchieve(int t, vector<vector<int>>& edges, int k) {
        par.resize(n_); rnk.assign(n_, 0);
        iota(par.begin(), par.end(), 0);
        
        int edgesUsed = 0, upgradesUsed = 0;
        
        // Must edges: if s < t, impossible. If would form cycle, impossible.
        for (auto& e : edges) {
            if (e[3] == 1) {
                if (e[2] < t) return false;
                if (!unite(e[0], e[1])) return false; // cycle with must-edge
                edgesUsed++;
            }
        }
        
        // Optional edges with s >= t (no upgrade needed)
        for (auto& e : edges) {
            if (e[3] == 0 && e[2] >= t) {
                if (unite(e[0], e[1])) edgesUsed++;
            }
        }
        
        // Optional edges needing upgrade (2*s >= t)
        for (auto& e : edges) {
            if (e[3] == 0 && e[2] < t && 2 * e[2] >= t) {
                if (unite(e[0], e[1])) {
                    edgesUsed++;
                    upgradesUsed++;
                }
            }
        }
        
        return edgesUsed == n_ - 1 && upgradesUsed <= k;
    }
    
    int maxStability(int n, vector<vector<int>>& edges, int k) {
        n_ = n;
        
        vector<int> candidates;
        for (auto& e : edges) {
            candidates.push_back(e[2]);
            candidates.push_back(2 * e[2]);
        }
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
        
        if (!canAchieve(1, edges, k)) return -1;
        
        int lo = 0, hi = (int)candidates.size() - 1, ans = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (canAchieve(candidates[mid], edges, k)) {
                ans = candidates[mid];
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};