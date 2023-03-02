#include<bits/stdc++.h>
using namespace std;

int LIS(vector<int> &arr,int size)
{
    vector<int> lis(size);
    lis[0]=1;

    for(int i=1;i<size;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)    
        {
            if(arr[j]<arr[i])
            {
                lis[i]=max(lis[i],lis[j]+1);
            }
        }
    }
    int res = lis[0];
    for(int i = 1;i<lis.size();i++)
    {
        res = max(lis[i],res);
    }
    return res;
}

int main()
{
    vector<int> arr={1,5};
    cout<<LIS(arr, 4);
    
    return 0;
}