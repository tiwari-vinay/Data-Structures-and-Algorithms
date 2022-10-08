#include<bits/stdc++.h>
using namespace std;


int sol(vector<int> arr,int target)
{
    if(target == 0)
        return 0;
    int res=INT_MAX;
    for(int i=0;i<=target-1;i++)
    {
        if(i+arr[i]>=target)
        {
            int sub_res=1+sol(arr,i);
            if(sub_res!=INT_MAX)
                res = min(res,sub_res);
        }
    }
    return res;
}

// Optimizatio using Tabulation

int solution (vector<int> arr,int target)
{
    int dp[target+1];
    dp[0]=0;
    for(int i=1;i<=target;i++)
        dp[i]=INT_MAX;
    
    for(int i=1;i<=target;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+arr[j]>=i)
            {
                if(dp[j]!=INT_MAX)
                    dp[i]=min(dp[i],dp[j]+1);
            } 
        }
    }
    return dp[target];
}

int main()
{
    vector<int> arr={3,4,2,1,3,1};
    int target = arr.size()-1;
    cout<<solution(arr,target);

    return 0;
}