#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="innings";
    string s1,s2;
    for(auto i:s)
    {
        s1.push_back(i);
    }
    for(auto it=s.rbegin();it!=s.rend();it++)
    {
        s2.push_back(*it);
    }
    if(s1==s2)
    cout<<"PALINDROME";
    else  cout<<"not a palindrome";
    return 0;
}