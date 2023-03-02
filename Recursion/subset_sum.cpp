#include<iostream>
using namespace std;
int subsetSum(int arr[],int n,int sum)
{
   if(n==0) 
        return (sum==0)?1:0;
    return subsetSum(arr,n-1,sum) + subsetSum(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int n=4;int sum=5;
    int arr[n]={2,3,4,5};
    cout<<"the total no of sebsets are: "<<subsetSum(arr,n,sum);
    return 0;
}