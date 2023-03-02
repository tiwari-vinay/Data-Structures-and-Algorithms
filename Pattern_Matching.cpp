#include<bits/stdc++.h>
using namespace std;

//2nd way if the LCS of s and p = p, then pattern is matched otherwise, not matched 

bool sol(string s,string p)
{
    int i=0; int j =0;
    while(i<s.length() and j<p.length())
    {
        if(s[i]==p[j])
            {i++;j++;}
        else
            i++;
    }
    return (j==p.length());
}

int main()
{
    string p = "AAB";
    string s = "ABBABB";
    sol(s,p)==true?cout<<"Pattern Matched":cout<<"Pattern does not matched";
    return 0;
}