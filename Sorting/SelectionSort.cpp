#include<bits/stdc++.h>
using namespace std;

            // Selection sort does the swapping only once in every pass. 
            // It finds out the maximum or minimum and swaps it with the correct position.
void SelectionSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int key = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[key])
                key=j;
        }
        swap(arr[i],arr[key]);
    }
}
int main()
{
    vector<int> v={-3,-4,5,6,7,-334,4,-6};
    SelectionSort(v);
    for(auto x: v)
        cout<<x<<" ";

    return 0 ;
}