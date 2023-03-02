#include<bits/stdc++.h>
using namespace std;

int rod_cutting(vector<int> rod,vector<int> price, int L,int n)
{
    if(L==0)
        return 0;
    if(n < 0)
            return 0;
    else if(rod[n-1]>L)
        return rod_cutting(rod,price,L,n-1);
    else{
        return max(rod_cutting(rod,price, L,n-1),price[n-1]+rod_cutting(rod,price,L-rod[n-1],n));
    }
}

//tabulation solution, memoization is easy
int rod_cutting_tabulation(vector<int> rod_len, vector<int> price, int L,int n)
{
    int dp[n+1][L+1];
    for(int i=0; i<n+1;i++)
    {
        for(int j = 0; j<L+1;j++)
        {
            if(i==0 or j==0)
                dp[i][j] = 0;
            else if(rod_len[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else{
                dp[i][j] = max(dp[i-1][j], price[i-1]+dp[i][j-rod_len[i-1]]);
            }
        }
    }
    return dp[n][L];
}
int main()
{
    vector<int> rod={1,2,3,4};
    vector<int> price={1,5,8,9};
    int L=4;
    int n = rod.size();
    cout<<"max profit: "<<rod_cutting_tabulation(rod,price,L,n);

    return 0;
}