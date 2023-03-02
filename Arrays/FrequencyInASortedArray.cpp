#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> Freq(vector<int> arr)
{
    unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    return m;
}

void frequency(vector<int> arr)
{
    int n=arr.size();
    int f=1;int i=0;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            f++;
            i++;
        }
        cout<<arr[i]<<" "<<f<<endl;
        i++;
        f=1;
        if(n==1 or arr[n-1]!= arr[n-2])
        cout<<arr[n-1]<<" "<<1;
    }
}
int main()
{
    vector<int> arr{33,4,4,4,5,5,566,6,6,6,6,6,4333,33};
    // auto m= Freq(arr);
    // for(auto x: m)
    // {
    //     cout<<x.first<<"    "<<x.second<<endl;
    // }

    frequency(arr);
    return 0;
}