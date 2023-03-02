#include<iostream>
using namespace std;


// condition given is that the array is SORTED so we dont need to take extra things into account that the the array elements is an overhead and this makes the function simple 
void Duplicates(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]!=temp[j]);
            temp
        }
    }

}

int main()
{
    int arr[]={2,4,5,6,4,2,45,63,3,4,5,3};
    Duplicates(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}