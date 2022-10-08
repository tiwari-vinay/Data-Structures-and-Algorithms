#include<bits/stdc++.h>
using namespace std;

int subsetSum(vector<int> arr,int n,int sum)
{
    //we need to return 1 in case if both n and sum == 0;
    if(n==0)
        return (sum==0)?1:0;
    else  
        return subsetSum(arr,n-1,sum-arr[n-1])+subsetSum(arr,n-1,sum);
}

int table[100][100];

int dpSol(vector<int> arr,int n,int sum)
{
    // vector<vector<int>> table(n+1,vector<int> (sum+1));
    
    for(int i=1;i<=sum;i++)
        table[0][i]=0;
    for(int i=0;i<=n;i++)
        table[i][0]=1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j<arr[i-1])
                table[i][j]=table[i-1][j];
            else
                table[i][j]=table[i-1][j]+table[i][j-arr[i]];
        }
    }
    return table[n][sum];
}

int main()
{
    vector<int> arr={1,3,5,6};
    int sum=9;
    cout<<dpSol(arr,arr.size(),sum);

    return 0;
}