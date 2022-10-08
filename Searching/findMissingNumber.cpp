#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int n = arr.size()+1;
    int  ans = n*(n+1)/2;
    int total = 0;
    for(auto i: arr)
    {
        total +=i;
    }

    return ans-total; 
}

int find_missing(vector<int> v){
    int n = v.size();
    int X = v[0];
    int Y = 1;
    for(int i = 1;i<n;i++)
    {
        X^=v[i];
    }
    for(int i = 2;i<=n+1;i++)
        Y^=i;
        return X^Y;
}

int main()
{
    vector<int> v{1,2,3,4,5,6,7,9};
    cout<<find_missing(v);
    return 0 ;
}