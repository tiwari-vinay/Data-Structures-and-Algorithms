#include<bits/stdc++.h>
using namespace std;

int editDistance(string s1,string s2,int m,int n)
{
    if(m==0)    return n;
    if(n==0)    return m;

    if(s1[m] == s2[n])
        return editDistance(s1,s2,m-1,n-1);
    else{
        return 1+min(editDistance(s1,s2,m,n-1),min(editDistance(s1,s2,m-1,n),editDistance(s1,s2,m-1,n-1)));
    }
}

int editDistanceDP(string s1,string s2,int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0)
                dp[i][j] = j;
            else if(j==0)
                dp[i][j] = i;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] =1 + min(min(editDistanceDP(s1,s2,i-1,j),editDistanceDP(s1,s2,i,j-1)),editDistanceDP(s1,s2,i-1,j-1));
            }
        }
    }
    return dp[m][n];
}
int main()
{
    string s1 = "abc",s2="bcd";
    cout<<"Edit distance is : "<<editDistance(s1,s2,s1.length(),s2.length());
    cout<<"\nEdit distance is, dp solution : "<<editDistanceDP(s1,s2,s1.length(),s2.length());
    return 0;
}