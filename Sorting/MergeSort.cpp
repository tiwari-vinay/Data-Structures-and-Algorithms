#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1];int r[n2];
    for(int i=0;i<n1;i++)    
        l[i]=arr[left+i];
    for(int i=0;i<n2;i++)
        r[i]=arr[mid+i+1];
    int i=0,j=0,k=0;
    while (i<n1 and j<n2)
    {
        if(l[i]<=r[j])
        {
            arr[k+left]=l[i];
            i++;k++;
        }
        else{
            arr[k+left]=r[j];
            j++;k++;
        }
    }
    while(i<n1)
    {
        arr[left+k]=l[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[left+k]=r[j];
        k++;j++;
    }
}

void MergeSort(vector<int> &arr,int begin,int end)
{
    int mid=arr.size()/2;
    MergeSort(arr,begin,mid);
    MergeSort(arr,mid+1,end);
    Merge(arr,begin,mid,end);
}

int main()
{
    vector<int> v={-3,-4,5,6,7,-334,4,-6};
    MergeSort(v,0,v.size()-1);
    for(auto x: v)
        cout<<x<<" ";

    return 0 ;
}

