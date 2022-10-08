#include<bits/stdc++.h>
using namespace std;

/*

This problem is just the extension of the longest common subsequence but with the exception that we need to find out the longest common subsequence of the same string and where we find the strings equeal we need to add another condition that indexes are not equal.

*/
int dp[100][100];

int LRC(string s, int m)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = 0;
            if (s[i - 1] == s[j - 1] and i != j)
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][m];
}

int main()
{
    string s="aaabdabaab";
    cout<<LRC(s,s.length());
    
    return 0;
}