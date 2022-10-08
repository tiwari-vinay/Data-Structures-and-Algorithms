#include<bits/stdc++.h>
using namespace std;

// finding out the majority element's index is done using the moore's algorithms

int solution(vector<int> arr)
{
    int ans=0; int count = 1;
    for(int i=0; i<arr.size();i++)
    {
        if(arr[ans]==arr[i])
            count++;
        else
            count--;
        if(count==0) 
        {ans = i;count = 1;}
    }
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[ans] == arr[i])
            count++;
    }
    if(count<arr.size()/2)
        ans = -1;
    return ans; 
}



int main()
{

    return 0 ;
}