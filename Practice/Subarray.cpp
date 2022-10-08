#include<bits/stdc++.h>
using namespace std;
void  subarray(vector<int> arr)
{
    int n=arr.size();
    int start = 0; int end =0;
    for(int i=0;i<n;i++)
    {
        start =i;end=i+1;
        cout<<endl;
        for(int end=i+1;end<n;end++)
        {cout<<"{";
            for(int k=start;k<end;k++)
            {
                
                cout<<arr[k]<<",";
            }
            cout<<"}";
        }
    }
}

void SubArrays(vector<int> arr)
{
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            count++;
            cout<<endl;
        }
    }cout<<"\n count of total subarrays is : " <<count;
}

int main()
{
    vector<int> arr={1, 2, 3, 4};
    SubArrays(arr);
    return 0;

}