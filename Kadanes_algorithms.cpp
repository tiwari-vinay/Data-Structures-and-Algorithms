#include<bits/stdc++.h>
using namespace std;

// Kadane's algorithm is used to find out the sum of the largest sum contiguous subarray 
int KadanesAlgo(int arr[],int n){
    int max_sum = 0;
    int sum_till_now = 0;
    for(int i=0; i<n; i++)
    {
        sum_till_now += arr[i];
        if(sum_till_now<0)
            sum_till_now =0;
        if(max_sum<sum_till_now)
            max_sum=sum_till_now;
    }
    return max_sum;
}
int main(){
    int arr[] = {4,2,5,-33,-5,19,20,-30}; 
    int n = sizeof(arr)/sizeof(int);
    cout<<"the largest sum of contiguous subarray:"<<KadanesAlgo(arr,n);
    return 0;
}