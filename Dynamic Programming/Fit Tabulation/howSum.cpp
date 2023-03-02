#include<bits/stdc++.h>
using namespace std;

vector<int> howSum(int targetSum, vector<int>arr)
{
    vector<vector<int>> table(targetSum+1,{0});

    table[0][0]=1;

    for(int i=0;i<=targetSum;i++)
    {
        if(table[i][0]>0)
        {
            for(auto num: arr)
            {
                int pos=i+num;
                table[i].pop_back();  
                table[i+num] = table[i];
                table[i+num].push_back(num);
            }
        }
    }ḥ

    return table[targetSum];
}
int main()
{
    
    int target = 3533355;
    vector<int> arr = {2,4};
    vector<int> ans = howSum(target,arr);
    for(auto nums: ans)
        cout<<nums<<" ";

    return 0;
}