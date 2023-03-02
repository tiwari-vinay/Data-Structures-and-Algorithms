#include<bits/stdc++.h>
using namespace std;

int min_ops(int arr[],int x, int n)
{
    // base cases
    if(x==0)
        return 0;
    if(n<0 and x>0)
        return INT_MAX;
    else if(arr[n-1]>x)
        return min_ops(arr,x,n-1);
    else
        return min_ops(arr,x,n-1),1+min_ops(arr,x-arr[n-1],n-1);
}
int main()
{
    int arr[] = {1,1,4,2,3};
    int x = 5;int n = sizeof(arr)/sizeof(int);
    cout<<"minimum operations : "<<min_ops(arr,x,n);
}