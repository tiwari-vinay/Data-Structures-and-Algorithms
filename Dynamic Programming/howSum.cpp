#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

bool howSum(int targetSum,vector<int> &arr,unordered_map<int,bool> memo)
{
    if(memo.find(targetSum)!=memo.end())
        return memo[targetSum];

    if(targetSum == 0)  return 1;  

    if(targetSum<0) return 0;

    for(auto x: arr) 
    {
        if(howSum(targetSum-x,arr,memo))
        {
            ans.push_back(x);
            memo[targetSum]=howSum(targetSum-x,arr,memo);
            return memo[targetSum];
        }
    }
    memo[targetSum]=false;
    return false;
}

int main()
{
    vector<int> arr={7,14};
    int targetSum=300;

    unordered_map<int,bool> memo;

    howSum(targetSum,arr,memo);

    if(ans.size()==0)
        cout<<"Null";

    for(auto x: ans)
        cout<<x<<"  ";

    return 0;
}


int sol(int n)
{
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=0;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}