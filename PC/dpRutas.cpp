#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> dp;
int sol(int m, int n){
    if (m==0)return 1;
        if (n==0)return 1;
        if (dp[m][n]!=-1)return dp[m][n];
        return dp[m][n]=sol(m-1,n) + sol(m,n-1);

}

    int uniquePaths(int m, int n) {
        dp= vector<vector<int>>(m,vector<int>(n,-1));
        return sol(m-1,n-1);

}
};