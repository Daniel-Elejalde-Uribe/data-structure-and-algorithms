#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dp;
    int sol(vector<int>& cost, int i){
        if(i<0)return 0;
        int& ans = dp[i];
        if (ans != -1)return dp[i];
        ans = min(sol(cost, i-1), sol(cost, i-2)) + cost[i];
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        dp = vector<int>(cost.size()+1, -1);
        cost.push_back(0);
        return sol(cost, cost.size()-1);
}
};