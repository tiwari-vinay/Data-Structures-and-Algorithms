#include<bits/stdc++.h>
using namespace std;

// void solution2(vector<int> arr,int K)
// {
//     unordered_set<int> s;
//     for(int i =0;i<arr.size();i++)
//     {
//         if(s.find(K-i))
//             cout<<i<<K-i;
//         s.insert(i);
//     }
// }
void solution(vector<int> arr,int K)
{
    int low=0;int n=arr.size();
    int high=n-1;
    while(low<high)
        if(arr[low]+arr[high]==K)
            {break;}
        low++;
        high--;
}

int main()
{
    vector<int> v={3,4,5,6,677,4,3,3,45};
    int k = 681;
    solution(v,k);

    return 0 ;
}