#include<bits/stdc++.h>
using namespace std;

int sol(vector<int> arr,int i,int j,int sum)
{
    if(i+1==j)
        return max(arr[i],arr[j]);
    return max(sum - sol(arr,i+1,j,sum-arr[i]),sum-sol(arr,i,j-1,sum-arr[j]));
}

int sol2(vector<int> arr,int i ,int j)
{
    int dp[]
    if(i+1==j)  return max(arr[i],arr[j]);


    return max(arr[i]+min(sol2(arr,i+2,j),sol2(arr,i+1,j-1))
               ,arr[j]+min(sol2(arr,i+1,j-1),sol2(arr,i,j-2)));
}


// optimizatio using decltype
// method1 : using tabulation.

int main()
{
    vector<int> arr={20,5,4,6};
    int i=0,j=3;
    int sum=0;
    for(auto X:arr)
    {
        sum+=X;
    }
    cout<<"max got:"<<sol2(arr,i,j);

    return 0;
}