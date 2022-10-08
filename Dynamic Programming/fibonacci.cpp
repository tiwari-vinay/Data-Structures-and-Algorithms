#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n,unordered_map<int,int>&memo)
{
    if(memo.find(n)!=memo.end())
        return memo[n];
    if(n<=2)
        return 1;
    memo[n] = fibonacci(n-1,memo)+fibonacci(n-2,memo);
    return memo[n];
}
int main()
{  
    unordered_map<int,int> memo;
    cout<<fibonacci(5,memo)<<endl;
    cout<<fibonacci(6,memo)<<endl;
    cout<<fibonacci(20,memo)<<endl;
    cout<<fibonacci(40,memo)<<endl;

}