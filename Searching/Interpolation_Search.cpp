
_____Interpolation Search______

Its a method of creating new data sets within the range values given.
Its using a constant K to estimate the key near to a values in the range(array).
K = (key - low)/(high - low)

Time Complexity = In binary search we are dividing our search space into two parts, in this case we are estimating our value near key inside of the array with the help of K and then using linear search to find actual search index.
T(n) = loglog(n) : best case 
But T(n) = O(n)  : when the search space is not uniformly distributed and the unorderered.

int interpolationSearch (int arr,int low, int high , int key)
{
    int low =0, high = sizeof(arr)/sizeof(int)-1,mid;
    while(low<high)
    {
        mdi = low + (((data - arr[low])*(high-low))/(high-low));
        if(key == arr[mid])
            return mid +1;
        if(key < arr[mid])
            high = mid -1;
        if(key > arr[mid])
            low = mid +1;
    }
    return -1 ;
}