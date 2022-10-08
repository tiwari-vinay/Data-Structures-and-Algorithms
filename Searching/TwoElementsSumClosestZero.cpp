#include<bits/stdc++.h>
using namespace std;


// Finding the two elements whose sum is closest to zero 

// solution one: 

//  -- > A = [3,4,5,6,67,7,-45]
// one simple sollution is that we maintain two variable min sum and sum, finding out the sum of all the varianle from the array and comparing the absolute result of the alll the varibles, then if the sum is less than the absolute sum of the previous min sum then we updatae the variables.

// solution two:
// how to improve upon the complexity?
// --> first sort and then loop from the beginning two the end and maintaining the sum and min sum. 

void solution(vector<int> arr)
{
    int n = arr.size();
    if(n<2)
        cout<<"invalid array";
    int i=arr[0], j=arr[n-1],min=abs(arr[0]+arr[n-1]), sum=0;
    sort(arr.begin(),arr.end());
    int low = 0; int high = n-1;
    while(low<high)
    {
        sum = abs(arr[low] + arr[high]);
        if(sum<min)
            {
                i= arr[low];
                j= arr[high];
            }
    }
    cout<<"the two elements are:"<<i<<" "<<j;
}


int main()
{
    variables
    vector<int> v={33,4,566,6,67,88,-45,-454};
    solution(v);

    return 0 ;
}