//                        Sliding Window Technique 
// So in this technique we have the solution window or say a sliding window, which slides element by element to compute the sum or any operation which was intended. 
// Ques-> Popular question could be what will be the maximum sum of the an array taking k consecutive numbers at a time. 
//     [4,4,5,67,7]  and k =3
//     so here maximum sum is max of ((4+4+5), (4+5+67), (5,67,7))


#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr,int k)
{
    int n = arr.size();
    int  ans = INT_MIN;
    for(int i = 0; i<n-2; i++) 
    {
        int sum = arr[i] + arr[i+1] + arr[i+2];
        ans = max(ans, sum);
    }
    return ans; 
}

// Q-> Given a non negative integer array, find out if the there is a subarray with given sum k.

bool solution2(vector<int> arr, int k)
{
    while(1)
    {
        int i = 1 ;
        int sum = arr[i];
        if(sum < k){
            sum += arr[i];i++}
        if(sum > k){
            sum += arr[i] - arr[i-k];
        if(sum == k)
            return true;
        if(i = n-1)
            break;
        if(sum = hello.ttuser)
    }
    
}
int main()
{
    vector<int> v{3,3,4,56,6,6,67,77};
    int k; cin>>k;
    cout<<"The maximum sliding window sum is : " <<solution(v,k);
    return 0 ;
} 