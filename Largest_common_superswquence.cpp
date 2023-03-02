#include<bits/stdc++.h>
using namespace std;

string subsequence(string s1,string s2){
        string ans = "";
        int n1 = s1.length(),n2=s2.length();
        string dp[n1+1][n2+1];
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i==0 or j==0)
                    dp[i][j]="";
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j] += dp[i-1][j-1]+s1[i-1];
                }
                else
                    dp[i][j] += dp[i][j-1].length()>dp[i-1][j].length()?dp[i][j-1]:dp[i-1][j];
            }
        }
        return dp[n1][n2];
}
int main(){
    string s1 = "abac",s2 = "cab";
    string s_sq = subsequence(s1,s2);

        int i=0; int j = 0;
        string ans = "";
        int n1 = s1.length(),n2=s2.length();

        for(auto c: s_sq)
        {
            while(s1[i]!=c)
                ans+=s1[i++];
            while(s2[j]!=c)
                ans+=s2[j++];
            ans+=c;
            i++;j++;
        }
        ans+=s1.substr(i)+s2.substr(j);

    cout<<"the smalllest common supersequence : "<<ans;

    return 0;
}