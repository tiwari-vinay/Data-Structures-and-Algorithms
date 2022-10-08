#include<bits/stdc++.h>
using namespace std;

// this soluttion takes n square time 
int solution(vector<int> arr)
{
    int n = arr.size();
    int  ans;
    for(int i=0; i<n; i++)
    {
        int cur_count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
                cur_count++;
            else
                break;
        }
        ans = max(cur_count, ans);
    }
    return ans; 
}

int solutions(vector<int> arr)
{
    int ans; int count = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
            count=0;
        else count++;
    }
    ans = count;
    return ans;
}
int main()
{
    vector<int> arr{1,1,0,0,0,1,1,1,1,1,1};
    cout<<"the consecutive ones are :"<<solutions(arr);
    return 0 ;
}