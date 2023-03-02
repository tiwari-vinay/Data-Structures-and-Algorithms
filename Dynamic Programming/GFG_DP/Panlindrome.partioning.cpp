#include<bits/stdc++.h>
using namespace std;

// GFG idea is to cut at all possible places and return minimum of those values.
int sol(string s,int i,int j)
{
    if(s.size()<=1)
        return 0;

    int res= INT_MAX;
    for(int k=i;k<j;k++)
    {
        res=min(res,1+sol(s,i,k)+sol(s,k,j));
    }
    return res;
}

int PalindromePartioning(string s,int i,int j)
{
    if(s.size()==0 or s.size()==1)
        return 0;
    if(i==j or i>j)
        return 0;
    if(s[i]==s[j])
        {i++;j--;}

    int res = INT_MAX;
    
    if(s[i]!=s[j])
        res = min(res,1+PalindromePartioning(s,i+1,j)+PalindromePartioning(s,i,j-1));
    return res;
}

int main()
{
    string  s = "absbaz";
    int i=0;int j=5;
    cout<<sol(s,i,j);

    return 0;
}