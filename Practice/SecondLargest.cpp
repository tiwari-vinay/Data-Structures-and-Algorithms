#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> arr){
    int largest=-1;
    int SL=-1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>largest)
        {
            largest= arr[i];
        }
    }
    for(int j=0;j<arr.size();j++)
    {
        // if(arr.size()==1)
        // return -1;
        // if(arr[j]==largest)
        // continue;
       
        if(arr[j]>SL && arr[j]<largest)
        {
            SL=arr[j];
        }
    }
    return SL;
}

int main()
{
    vector<int> arr{22,22,};
    cout<<secondLargest(arr);
    return 0;
}
