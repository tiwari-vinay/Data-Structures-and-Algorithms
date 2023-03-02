#include<bits/stdc++.h>
using namespace std;

// ----------In a grid of dimension m*n, your goal is to find out the number fo ways to reach from top left to bottom right. You could travel only right or down.


int GridTraveller(int m,int n,unordered_map<string,int> &memo)
{
    string key=to_string(m)+","+to_string(n);

    if(memo.find(key)!=memo.end())
        return memo[key];
        
    if(n==1 and m==1)
        return 1;

    if(n==0 or m==0)    
        return 0;

    memo[key]=GridTraveller(m-1,n,memo)+GridTraveller(m,n-1,memo);
    return memo[key];
}

int main()
{
    unordered_map<string,int> memo;

    cout<<GridTraveller(1,1,memo)<<endl;
    cout<<GridTraveller(2,3,memo)<<endl;
    cout<<GridTraveller(3,2,memo)<<endl;
    cout<<GridTraveller(3,3,memo)<<endl;
    cout<<GridTraveller(10,10,memo)<<endl;

    return 0;
}