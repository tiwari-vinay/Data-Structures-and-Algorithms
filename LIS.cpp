#include<bits/stdc++.h>
using namespace std;

int* LIS(int arr[], int n, int lis[])
{
    for(int i=0; i<n;i++)
        lis[i] = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(arr[j]<arr[i] && lis[i]<lis[j]+1)
                lis[i] = lis[j] + 1;
        }   
    }
    return lis;
}

//Maximum sum increasign subsequence

int MSIS(int arr[],int n, int msis[])
{
    for(int i=0; i<n; i++)
        msis[i] = arr[i];
    int max_sum = 0;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if((arr[i] > arr[j]) and (msis[i]<msis[j] +arr[i]))
            {
                msis[i] = arr[i] + msis[j];
            }
            if(max_sum<msis[i])
                max_sum = msis[i];
        }
    }
    return max_sum;
}
int main()
{
    int arr[] ={14,1,3,5,2,55,0};
    int n = sizeof(arr)/sizeof(int);
    int lis[n];
    int *ans = LIS(arr,n,lis);
    int len = 0;int index = 0;
    for(int i=0; i<n;i++)
        if(len<ans[i])
        {
            len = ans[i];
            index = i;
            cout<<arr[i]<<":"<<ans[i]<<endl;
        }
    cout<<len;


    cout<<"\nlongest sum increasing subsequence: "<<MSIS(arr,n,lis);
    for(auto x: lis)
        cout<<endl<<x;
    return 0;
}