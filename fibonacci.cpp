#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

int fibonacci(int n,vector<int> &dp)
{
    if(n==0 or n==1)
        dp[n]=n;
    if(dp[n]!=-1)
        return dp[n];
    else 
        return dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
}
int factorial(int n,vector<int> dp)
{
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]*i;
    }
    return dp[n];
}
int main()
{
    int n =  5;
    vector<int> dp(n+1,-1);
    cout<<fibonacci(n,dp)<<endl;

    vector<int> f(n+1);
    cout<<"factorial of n:"<<factorial(n,dp);

    return 0;
}