#include<iostream>
using namespace std;


// Reversing an array with this function in theta(n)
void Reverse(int arr[],int n)
{
    int low=0; int high = n-1;
    while(low<high)
    {
        int temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        low++;
        high--;
    }
}
int main()
{
    int arr[]={1,4,5,6,3,633,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,7);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}