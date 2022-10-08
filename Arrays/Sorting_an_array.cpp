#include<iostream>
using namespace std;

void Sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
            if(arr[i+1]<arr[i])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        
    }
}

void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int arr[]={33,56,43,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sort(arr,4);
    show(arr,4);
    return 0;
   
}