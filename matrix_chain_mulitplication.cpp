#include<bits/stdc++.h>
using namespace std;

//knapsack tabulation solution. this is much better than the memoization solution as the memoization requires function calls and memory and tabulation requires only memory;
int knapsack(vector<int> wt,vector<int> val, int n, int c)
{   
    int dp[n+1][c+1];
    for(int i=0; i<=n; i++)    
    {
        for(int j=0; j<=c;j++)
        {
            if(i==0 or j==0)    //base case
                dp[i][j]=0;
            else if(wt[i-1]>j)  //skip
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        }
    }

    for(int i=0; i<=n;i++)
    {
        for(int j=0; j<=c;j++)
            cout<<dp[i][j]<<",";
        cout<<endl;
    }
    return dp[n][c];
}

// knapsack subproblem 
// 1. Subset problem : Given an array and a sum, find the subset of array has the sum equal to sum;

bool subset_sum(vector<int> arr,int n,int sum)
{
    if(sum == 0)        return true;
    if(n<0 or sum < 0)  return 0;
    if(arr[n-1]>sum)    return subset_sum(arr,n-1,sum);
    else                return (subset_sum(arr,n-1,sum) or subset_sum(arr,n-1,sum-arr[n-1]));
}

bool subset_sum_tabulation(vector<int> arr,int sum)
{
    int n = arr.size();
    int dp[n+1][sum+1];
    dp[0][0] = true;
    for(int i=1;i<=n; i++) dp[i][0] = true;
    for(int i=1;i<=sum; i++) dp[0][i] = false;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(sum == 0)
                dp[i][j] = true;
            if(sum < 0)
                dp[i][j] = false;
            if(arr[i-1] > sum)
                dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = (dp[i-1][j] or dp[i-1][j-arr[i-1]]);
            }
        }
    }
    
    return dp[n][sum];

    
}

// 3. Counting number of subsets with given sum
int count_subsets(vector<int> arr,int sum,int n)
{
    // vector<vector<int>> dp(n+1,vector<int> (sum+1));
    if(sum == 0)
        return 1;
    if(n<0 or sum < 0)
        return 0;
    if(arr[n-1] > sum)
        return count_subsets(arr,sum,n-1);
    else{
        return count_subsets(arr,sum,n-1)+count_subsets(arr,sum-arr[n-1],n-1);
    }
}

// 4. Minimum subset difference 
int min_difference(vector<int> arr)
{
    int sum = 0;int n = arr.size();
    for(auto x: arr) sum +=x;

    bool dp[n+1][sum+1];
    dp[0][0] = true;
    for(int i=1;i<=n; i++) dp[i][0] = true;
    for(int i=1;i<=sum; i++) dp[0][i] = false;

    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(arr[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
            }
        }
    }

    int d = INT_MAX;
    for(int i = 1; i<=sum/2; i++)
        if(dp[n][i]==true)
            d=sum-2*i;

    return d;
}
int main()
{
    // vector<int> wt = {1, 3, 4, 5};
    // vector<int> val = {1,4,5,7};
    // int n = wt.size();
    // int c = 7;
    // cout<<"\n"<<knapsack(wt,val,n,c);

    vector<int> arr = {10,5};
    int sum = 20;
    int n = arr.size();

    cout<<subset_sum(arr,arr.size(),sum)<<endl;
    cout<<subset_sum_tabulation(arr,sum)<<endl;
    cout<<"\n the total number of subsets with given sum is:"<<count_subsets(arr,sum,n);
    cout<<"\n the minimum susbet sum difference is:"<<min_difference(arr);

    return 0;
}