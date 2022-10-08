

            ________Binary Search________
What is the binary search ?
Binary Search is an algorithm in which the we directly compare the element and return the result if index if the element matches otherwise we go to the middle element and compare the element to the middle of the element and go to right if the key is greater to the middle element else we go left and return the middle index if the key is matching the middle elemnt.

Time complexity of both the recursive and iterative approach is the bigOh(log n);


Iterative implementation
int binarySearch(int arr,int n,int key)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

Recursive Implementation
int binarySearch(int arr,int low,int high,int n,int key)
{
    int low=0;int high = n-1;
    int mid = low + (high - low)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarySearch(arr,mid+1,high);
    else
        return binarySearch(arr,low,mid-1,key);
    return -1;
}

