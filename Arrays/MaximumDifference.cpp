#include<bits/stdc++.h>
using namespace std;

int Largest(vector<int> arr)
{
    int n=arr.size();
    int L=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>L)
            L=arr[i];
    }
    return L;
}
int Smallest(vector<int> arr)
{
    int n=arr.size();
    int S=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<S)
            S=arr[i];
    }
    return S;
}
int maxDiffernce(vector<int> arr)
{
    // int diff=INT_MIN; int  i=0;
    // while(i<n)
    // {
        
    // }
    return Largest(arr)-Smallest(arr);

}
// this is also a better solution time complextity is O(n)
int maxDifference2(vector<int> arr)
{
    int n= arr.size();
    int dif=arr[1]-arr[0];
    int least= arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-least)
        {
            dif=max(dif,arr[i]-least);
            least = min(least,arr[i]);
        }
    }
    return dif;
}

int main()
{
    vector<int> arr={-11,3,34523,3,5,54,45,45,45};
    int x=maxDifference2(arr);
    cout<<x<<endl;
    cout<<Largest(arr)<<endl;
    cout<<Smallest(arr);
    return 0;
}