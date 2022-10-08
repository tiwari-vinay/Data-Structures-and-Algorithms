#include<bits/stdc++.h>
using namespace std;

int WaterTrapped(vector<int> arr)
{
    int n=arr.size();
    int water=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
            lmax =max(lmax,arr[j]);
        int rmax=arr[i];
        for(int k=i+1;k<n;k++)
            rmax=max(rmax,arr[k]);
        water= water + min(lmax,rmax)- arr[i];
    }
    return water;
}

// An efficient solution
int solution(vector<itn> arr)
{
    int n=arr.size();
    
}
int main()
{
    vector<int> arr{10,0,20};
    int waterTrapped= WaterTrapped(arr);
    cout<<"The amount of water trapped is :"<<waterTrapped;
    
    return 0;
}