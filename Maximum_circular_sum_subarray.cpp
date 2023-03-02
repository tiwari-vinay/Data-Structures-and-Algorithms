#include<bits/stdc++.h>
using namespace std;

int maxSumCircularSubarray(int arr[],int n)
{
    int maxSum = arr[0]; int i=0; int j=0;
    int sumTillNow = arr[0];
    int count = 0;
    for(i=1; i<n;i=(i+1)%n)
    {
        if(sumTillNow + arr[i] < sumTillNow)
        {
            sumTillNow = arr[i];
        }
        else {
            sumTillNow += arr[i];
        }
        if(maxSum < sumTillNow)
        {
            maxSum = sumTillNow;
        }
        else count++;
        if(count > 2*n) break;
    }
    return maxSum;
}
int main()
{
    int arr[]={1,2,3,5,-2,-6,8};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSumCircularSubarray(arr,n);
    return 0;
}