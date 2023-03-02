#include<bits/stdc++.h>
using namespace std;

string LRS(string s)
{
    int n = s.length();
    string dp[n+1][n+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0; j<=n;j++)
        {
            if(i==0 or j==0)
                dp[i][j] = "";
            else if(s[i-1]==s[j-1] and i!=j)
                dp[i][j]=dp[i-1][j-1]+s[i-1];
            else
                dp[i][j] = dp[i-1][j].length()>dp[i][j-1].length()?dp[i-1][j]:dp[i][j-1];
        }
    }
    return dp[n][n];
}

string LRS_Rec(string s1, string s2,int n1,int n2)
{
    if(n1<0 or n2<0)
        return "";
    if(s1[n1]==s2[n2] and n1!=n2)
    {
        string ans = LRS_Rec(s1,s2,n1-1,n2-1)+s1[n1];
        return ans;
    }   
    else return LRS_Rec(s1,s2,n1-1,n2).length()>LRS_Rec(s1,s2,n1,n2-1).length()?LRS_Rec(s1,s2,n1-1,n2):LRS_Rec(s1,s2,n1,n2-1);
}
int main()
{
    string s = "aabb";
    cout<<LRS(s)<<endl;
    cout<<LRS_Rec(s,s,s.length(),s.length());
    return 0;
}