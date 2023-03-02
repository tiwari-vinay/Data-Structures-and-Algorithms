#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int m,int n,vector<vector<int>> memo)
{
    if(memo[m-1][n-1]!=-1)
        return memo[m-1][n-1];

    if(m==0 or n==0)
        return 0;

    if(s1[m-1]==s2[n-1])
        return memo[m-1][n-1]=1+lcs(s1,s2,m-1,n-1,memo);

    memo[m-1][n-1]=max(lcs(s1,s2,m-1,n,memo),lcs(s1,s2,m,n-1,memo));
    return memo[m-1][n-1];

}

int main()
{
    string s1="helloVinay";
    string s2= "ellVinay";
    int m=s1.length(),n=s2.length();

    vector<vector<int>> memo(m,vector<int>(n,-1));
    cout<<lcs(s1,s2,s1.length(),s2.length(),memo);

    return 0;
}