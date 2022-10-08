#include<bits/stdc++.h>
using namespace std;

// Insertion sort works the similar way sort playing cards in hand. List is divided into two part and we select one element from the unsorted deck and puts it in the right place in the sorted one. 
// We shift all the elements of the already sorted list to right by one position. Then we assign the element which is smaller to the vacant position.

void InsertionSort(vector<int> &arr)
{
    int n=arr.size();
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i;
        while(arr[j-1]>key and j>0){
            arr[j]=arr[j-1];
            j--;;
        }
        arr[j]=key;
    }    
}

int main()
{
    vector<int> v={-3,-4,5,6,7,-334,4,-6};
    InsertionSort(v);
    for(auto x: v)
        cout<<x<<" ";

    return 0 ;
}