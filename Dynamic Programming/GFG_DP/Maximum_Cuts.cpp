#include<bits/stdc++.h>
using namespace std;

// Memoization solution 
int solution(int n,int a,int b,int c,vector<int> dp)
{
    // if(n%a != 0 and n%b!=0 and n%c!=0)
    // return dp[n]=-1;
    
    if(n==0)
        return dp[0]=0;
    if(n<0)
        return -1;

    dp[n]=max(solution(n-a,a,b,c,dp),max(solution(n-b,a,b,c,dp),solution(n-c,a,b,c,dp)));
    if(dp[n]==-1)
    return dp[n];
    else 
        return dp[n]+1;

}

int sol_tabulation(int n,int a,int b,int c)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
        if(i-a>=0)  dp[i]=max(dp[i],dp[i-a])   
        if(i-b>=0)  dp[i]=max(dp[i],dp[i-b])   
        if(i-c>=0)  dp[i]=max(dp[i],dp[i-c])   
        if(dp[i]!=-1)
            dp[i]++;
    }
    return dp[n];
}

int main()
{
    int n=10;
    int a=3,b=6,c=7;
    vector<int> memo(n+1,-1);

    cout<<solution(n,a,b,c,memo);
    return 0;
}