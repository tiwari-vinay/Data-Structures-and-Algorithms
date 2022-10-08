#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int n = arr.size()-2;
    int x=arr[0],y;
    for(int i=1;i<arr.size();i++)
    {
        x^=arr[i];
    }
    for(int i =1;i<=n;i++)
        x^=i;
    // now x contains the xor of the two repeating element
    while(true)
    {
        
    }
}

int main()
{
    vector<int> v;

    return 0 ;
}