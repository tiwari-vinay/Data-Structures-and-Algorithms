#include<bits/stdc++.h>
using namespace std;

void moveToEnd(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j!=0])
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}


// this is one of the most efficient solution
void moveToEnd2(vector<int> &arr)
{
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    vector<int> arr{22,444,0,0,0,44,4,444,455};
    moveToEnd2(arr);
    for(int i: arr)
        cout<<i<<" ";
    return 0;
}