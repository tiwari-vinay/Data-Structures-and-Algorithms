#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int *arr;
    int size,capacity;
    public:
    MinHeap(int c)
    {
        arr=new int[c];
        size=0;
    }
    
    int left(int i){return 2*i+1;}
    int right(int i){return 2*i+2;}
    int parent(int i){return floor((i-1)/2);}
    void insert(int k){
        if(size==capacity)
            return;
        size++;
        arr[size-1]=k;
        for(int i=size-1;i!=0 and arr[parent(i)]>arr[i];)
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void Heapify(int arr[],int n,int i)
    {
        int smallest=i;
        int left=left(i),right=right(i);
        if(arr[left]<arr[i] and left<n)
            smallest=left;
        if(arr[right]<arr[i])
        {
            smallest=right;
        }
        if(smallest!=i)
        {
            swap(arr[smallest],arr[i]);
            Heapify(arr,n,smallest);
        }
    }

    void Decrease(int arr[],int i,int newValue)
    {
        arr[i]=newValue;
        while(i!=0 and parent(i)<arr[i])
        {
            swap(arr[i],arr[parent(i)]);
        }
    }

    void Delete(int arr[],int i)
    {
        void
    }
    void print()
    {
        int i=0;
        while(i!=size)
        {
           cout<<arr[i]<<",";i++;
        }
    }
};

int main()
{
    MinHeap heap(5);
    heap.insert(245);
    heap.insert(2);
    heap.insert(55);
    heap.insert(1353);
    heap.insert(23);
    heap.insert(32);
    heap.insert(4);
    heap.insert(4);
    heap.print();

    return 0;
}