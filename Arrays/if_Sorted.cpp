#include<iostream>
using namespace std;
bool sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
        
    }
    return true;

}
int main()
{
    int arr[]={3,5,5,6,7,333,544,6333,333};
    cout<<sort(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}