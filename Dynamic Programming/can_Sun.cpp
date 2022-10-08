#include<bits/stdc++.h>
using namespace std;

bool canSum(int targetSum,vector<int> &arr,unordered_map<int,bool> &memo)
{
    if(memo.find(targetSum)!=memo.end())
        return true;

    if(targetSum==0)
        return true;

    if(targetSum<0)
        return false;

    for(auto x:arr)
    {
        if(canSum(targetSum-x,arr,memo))
        {
            memo[targetSum]=true;
            return true;
        }
    }
    memo[targetSum]=false;
    return memo[targetSum];
}

int main()
{
    vector<int> arr={2,3,4,5,5,4};

    int targetSum=10000;

    unordered_map<int,bool> memo;

    cout<<canSum(targetSum,arr,memo);
    return 0;
}