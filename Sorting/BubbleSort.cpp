#include<bits/stdc++.h>
using namespace std;

        // In each iteration one element pops to the correct position
        // thats why its called bubble sort and sometime sinking sort
// void BubbleSort(vector<int> &arr)
// {
//     int n=arr.size();
//     //we could introduce a variable swapped, which will be responsible to stop further passes if there is no swapping in any pass.
//     int swapped = 1;
//     for(int i=0;i<n and swapped;i++)
//     {
//         swapped=0;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped = 1;
//             }
//         }
//     }
// }

void BubbleSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    vector<int> v={-3,-4,5,6,7,-334,4,-6};
    BubbleSort(v);
    for(auto x: v)
        cout<<x<<" ";

    return 0 ;
}