#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int i, int j,int n1,int n2)
{
    if(i==n1 or j==n2)
        return 0;
    if(s1[i]==s2[j])
        return 1+LCS(s1,s2,i+1,j+1,n1,n2);
    else return max(LCS(s1,s2,i,j+1,n1,n2),LCS(s1,s2,i+1,j,n1,n2));
}

int mem_lcs(string s1,string s2,int i,int j,int n1,int n2,vector<vector<int>> &dp)
{
    if(i==n1 or j==n2)
        return 0;
    if(s1[i]==s2[j])
        return dp[i][j] = 1+mem_lcs(s1,s2,i+1,j+1,n1,n2,dp);
    if((dp[i][j]!=-1))
        return dp[i][j];
    return dp[i][j] = max(mem_lcs(s1,s2,i,j+1,n1,n2,dp),mem_lcs(s1,s2,i+1,j,n1,n2,dp));
}

int lcs_tabulation(string a,string b){
    int n = a.length(),m = b.length();
    vector<vector<int>> table(n+1,vector<int>(m+1,-1));
    for(int i=0; i<n; i++) table[i][0]=0;
    for(int i=0; i<m; i++) table[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=m;j++)
        {
            if(a[i]==b[j])
                table[i][j] = 1+table[i-1][j-1];
            else 
                table[i][j] = max(table[i][j-1],table[i-1][j]);
        }
    }

    return table[n][m];
}

int main()
{
    string s1 = "baaaaaaaba";
    string s2 = "abaaaaaaab";
    int n1=s1.length(),n2=s2.length();
    vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
    int i = 0,j=0;
    int ans = lcs_tabulation(s1,s2);
    cout<<"the length of the longest subsequence:"<<ans;


    return 0;
}