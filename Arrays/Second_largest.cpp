#include<iostream>
using namespace std;


// 1) Initialize the first as 0(i.e, index of arr[0] element
// 2) Start traversing the array from array[1],
//    a) If the current element in array say arr[i] is greater
//       than first. Then update first and second as,
//       second = first
//       first = arr[i]
//    b) If the current element is in between first and second,
//       then update second to store the value of current variable as
//       second = arr[i]
// 3) Return the value stored in second.


int S_Largest(int arr[], int n)
{
    int first =0; int second =-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[first])
        {
            second = first;
            first = i;
        }
        else if(arr[i]<arr[first])
        {
            if(second = -1 or arr[second]<arr[i])
                second = i;
        }
    }
    return arr[second];
}

int main()
{
    int arr[6]={2,4,65,67,4348,33434};
    cout<<S_Largest(arr,6);
    return 0;
}