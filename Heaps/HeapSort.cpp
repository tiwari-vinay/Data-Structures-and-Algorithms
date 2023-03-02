#include<bits/stdc++.h>
using namespace std;

// void Heapify(int arr[],int n,int i)
// {
//     int smallest=i;
//     int left=2*i+1,right=2*i+2;
//     if(left<n && arr[left]>arr[i])
//         smallest=left;

//     if(right<n && arr[right]>arr[i])
//         smallest=right;

//     if(smallest!=i)
//     {
//         swap(arr[i],arr[smallest]);
//         Heapify(arr,n,smallest);
//     }
// }
// void heapSort(int arr[],int n)
// {
//     for(int i=(n-2)/2;i>=0;i--)
//     {
//         Heapify(arr,n,i);
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         swap(arr[0],arr[i]);
//         Heapify(arr,i,0);
//     }
// }

 void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
int main()
{
    int arr[]={2,33,54,5,566,3,34,4};
    int n=8;
    heapSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;

    return 0;
}