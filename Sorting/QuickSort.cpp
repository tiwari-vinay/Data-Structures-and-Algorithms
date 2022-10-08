#include<bits/stdc++.h>
using namespace std;


int Partition(vector<int> arr,int l,int h)
{
    int pivot=arr[l];
    int i=l;int j=h;
    while(i<j)
    {
        do
        {
            i++;    
        }while(arr[i]<pivot);

        do{
            j--;
        }
        while(arr[j]>pivot);
        if(i<j)
            swap(arr[i],arr[j]);

    }
    swap(arr[l],arr[j]);
    return j;
}
void QuickSort(vector<int> &arr,int l,int h)
{
    if(l<h)
    {
        int j=Partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
}

int main()
{
    vector<int> v={-3,-4,5,6,7,-334,4,-6};
    QuickSort(v,0,8);
    for(auto x: v)
        cout<<x<<" ";

    return 0 ;
}