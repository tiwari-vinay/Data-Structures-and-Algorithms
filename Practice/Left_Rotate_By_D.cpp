#include<bits/stdc++.h>
using namespace std;

// this method is quite efficient and used no auxiliary space. Other method in main function is also goood and both takes theta(n) time.
void Reverse(vector<int> &arr,int low, int high);
void Left_Rotate(vector<int> &arr,int d)
{
    int n=arr.size();
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}
void Reverse(vector<int> &arr,int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main()
{
    vector<int> v{2,4,5,5,5,6,6,633,50};
    int d=4;
    Left_Rotate(v,d);


    // for(int i=0;i<d;i++)
    // {
    //     v.push_back(v[i]);
    // }
    // v.erase(v.begin(),v.begin()+4);
    for(auto x: v)
        cout<<x<<" ";
    return 0;
}