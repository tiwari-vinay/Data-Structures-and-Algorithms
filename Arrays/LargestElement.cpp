#include<bits/stdc++.h>
using namespace std;

int largest=0;
int secondL=0;
int max(int arr[],int x)
{

   for(int i=0;i<x;i++)
   {
       if(arr[i]>largest)
       largest=i;
   }
   return largest;
}
int secondLargest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondL && i!=largest)
        secondL=i;
    }
    return secondL;
}
int main()
{
    int arr[]={2,4,5,6,8,4,4,436};
    cout<<"max is at index:"<<max(arr,8);
    cout<<"the second largest is at:"<<secondLargest(arr,8);
    return 0;
}