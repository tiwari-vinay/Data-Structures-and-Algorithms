#include<bits/stdc++.h>
using namespace std;

int coin_sum(vector<int>coins,int n,int sum)
{
    //tabulation solution 
    // int dp[n+1][sum+1];
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=sum;j++)
    //     {
    //         if(j==0)
    //             dp[i][j]=0;
    //         else if(i==0)
    //             dp[i][j] = INT_MAX;
    //         else if(coins[i-1]>sum)
    //             dp[i][j] = dp[i-1][j];
    //         else 
    //             dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
    //     }
    // }
    //  return dp[n][sum];  

    //recursive solution

    if (sum == 0)
        return 0;

    if (sum < 0 or n <= 0)
        return 0;

    return min((coins, n - 1, sum)
           , 1+(coins, n, sum - coins[n - 1]));
}

int total_ways_toget_sum(vector<int> coins,int n,int sum)
{
    // if(sum==0)
    //     return 1;
    // if(n<0 or sum<0)
    //     return 0;
    // if(coins[n-1] > sum)
    //     return total_ways_toget_sum(coins,n-1,sum);
    // else{
    //     return total_ways_toget_sum(coins,n-1,sum)+total_ways_toget_sum(coins,n,sum-coins[n-1]);
    // }

    // dp tabulation solution
    int dp[n+1][sum+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            if(j==0)
                dp[i][j] = 1;
            else if(i==0 and j>0)
                dp[i][j] = 0;
            else if(coins[i-1]>j)
                dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int> coin={1,2,3};
    int sum = 4;
    int n = coin.size();
    cout<<"Minimum number of coins requuired to find the sum:"<<coin_sum(coin,n,sum);
    cout<<"\n total number of ways there to get the sum :"<<total_ways_toget_sum(coin,n,sum);
    return 0;
}