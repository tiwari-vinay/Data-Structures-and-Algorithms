#include<bits/stdc++.h>
using namespace std;

// so while passing array as \an argment, array name always points to the first element of the array
// two ways- 1. pointer
//           2. array
void square(vector<int> &arr, int size)
{
    for(int i = 0;i<size;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
 
}
int main()
{
    vector<int> arr(5,3);
    int size= arr.size();
    square(arr,size);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}