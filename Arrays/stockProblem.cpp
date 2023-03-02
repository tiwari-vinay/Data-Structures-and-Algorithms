#include<bits/stdc++.h>
using namespace std;

// arr[]={33,4,5,66,4};

// find out on which stocks need to buy and sell so that the profit is maximum


int MaxProfit(vector<int> price,int start,int end)
{
    if(end<=start)
        return 0;
    int profit =0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<end;j++)
        {
            if(price[i]<price[j])
            {
                int cur_profit=price[j]-price[i]+MaxProfit(price,start,i-1)+MaxProfit(price,j+1,end);
                profit=max(profit,cur_profit);
            }
        }
    }
    return profit;
}

// a better solution 
int maxProfit(vector<int> arr)
{
    
    int profit=0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i-1]<arr[i])
            {
                profit+=arr[i]-arr[i-1];
            }       
    }
    return profit;
}


int main()
{
    vector<int> arr= {2,44,66,3};
    // cout<<MaxProfit(arr,0,arr.size());
    cout<<maxProfit(arr);
    return 0;
}