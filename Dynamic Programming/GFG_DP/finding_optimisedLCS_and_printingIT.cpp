#include<bits/stdc++.h>
using namespace std;

// Naive method to find out the lcs of the string
// int LCS(string arr1,int n,string arr2,int m)
// {

//     if(m==0 or n==0)
//         {return 0;}
//     if(arr1[n-1]==arr2[m-1])
//         {res.push_back(arr1[n-1]);return 1+ LCS(arr1,n-1,arr2,m-1);}
    
//     else return max(LCS(arr1,n-1,arr2,m),LCS(arr1,n,arr2,m-1));
// }

int dp[100][100];

int LCS(string s1,string s2,int m,int n)
{
     for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
 
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
 
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

void printLCS(string s1,string s2,int m, int n)
{
    string s="";

    int i = m;
    int j = n;

    int len = dp[m][n];

    for(int i =0;i<len;i++)
    {
        s+="$";
    }

    int index = len-1;


    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
            {
                i--;j--;
                s[index]=s1[i];
                index--;
            }
        else if(dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else
            j--;
    }
    cout<<s;
}


int main()
{
    string s1 = "hello_there";
    string s2 = "heloslosfth";

    int m= s1.length();
    int n= s2.length();

    cout<<LCS(s1,s2,m,n);

    cout<<endl;

    printLCS(s1,s2,m,n);

    return 0;
}