#include<bits/stdc++.h>
using namespace std;

// Factorial using memoization
long long int facto(int n,map<long long int,long long int> memo)
{
    if(memo.find(n)!=memo.end())
        return memo[n];

    if(n==0)
        return 1;

    return memo[n]=n*facto(n-1,memo);
}

// Factorial using tabulation
int factor(int n)
{
    int arr[n+1];
    arr[0]=1;
    for(int i=1;i<=n;i++)
    {
        arr[i]=i*arr[i-1];
    }
    return arr[n];
}

int main()
{
    int n=10;
    map<long long int,long long int> memo;
    cout<<factor(n);
    return 0;
}