#include<bits/stdc++.h>
using namespace std;

int res=0;
int coinSum(int sum,vector<int> &arr,int size,vector<vector<int>> memo)
{
    if(memo[size][sum]!=-1)
        return memo[size][sum];

    if(sum==0)  return memo[size][sum]=1;

    if(size==0) return 0;

    if(sum > arr[size-1])
    {
        return memo[size][sum]=coinSum(sum-arr[size-1],arr,size,memo)+coinSum(sum,arr,size-1,memo);
    }
    else{
        return memo[size][sum]=coinSum(sum,arr,size-1,memo);
    }

}

int main()
{
    int sum=10, size=4;
    vector<int> coinBank={1,2,3};

    vector<vector<int>> memo(size+1,vector<int>(sum+1,-1));

    cout<<coinSum(sum,coinBank,size,memo);

    return 0;
}