#include<bits/stdc++.h>
using namespace std;

int knapsack(int W,vector<int> wt,vector<int> val,int n,vector<vector<int>> memo)
{
    if(memo[n][W]!=-1)
        return memo[n][W];
    if(n==0 or W == 0)  return 0;
    
    if(wt[n-1]>W)
        return memo[n][W]=knapsack(W,wt,val,n-1,memo);
    else{
        return memo[n][W]= max(knapsack(W,wt,val,n-1,memo),val[n-1]+knapsack(W-wt[n-1],wt, val, n-1,memo));
    }
}

// to optimize the solution usign dp we could 2-d array to store the non redundanat recursive calls. 

int knapsack_tabulation(int W,vector<int> wt,vector<int> val,int n)
{
    vector<vector<int>> dp(n+1,vector<int> (W+1));
    for(int i=0;i<n;i++) dp[i][0]=0;
    for(int i=0;i<W;i++) dp[0][i]=0;

    for(int i=0;i<)
}


int main()
{
    vector<int> wt={6,5,3,7,2};
    vector<int> val={20,5,23,5,6,7};
    int W = 12;

    vector<vector<int>> memo(wt.size(),vector<int> (W,-1));

    cout<<knapsack(W,wt, val, wt.size(),memo);

    cout<<memo[0][0];

    return 0;
}