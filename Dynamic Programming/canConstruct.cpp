#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string target, vector<string> worldBank,unordered_map<string,bool> memo)
{
    if(memo.find(target)!=memo.end())    return memo[target];

    if (target == "")
       {cnt++; return true;}

    for (auto x : worldBank)
    {
        if (target.find(x) == 0)
        {
            string suffix = target.erase(0, x.length());
            if (canConstruct(suffix, worldBank,memo))
            {
                memo[target]=true;
                return true;
            }
        }
    }
    memo[target]=false;
    return false;
}

int main()
{
    string target = "abcdef";
    vector<string> worldBank = {"ab","abc","de" "cde", "sfas", "f","abs","helly","whs"};

    unordered_map<string,bool> memo;

    if (canConstruct(target, worldBank,memo))
        cout << "yes";
    else
        cout << "no";

    return 0;
}