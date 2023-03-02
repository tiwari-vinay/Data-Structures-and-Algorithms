#include<bits/stdc++.h>
using namespace std;
vector<int> ans;

+   if(targetSum<0)     return {-1};


//     for(auto x: arr)
//     {
//             int remainder = targetSum-x;
//             vector<int> remainderResult=bestSum(remainder,arr);
//             if(remainderResult[0]!=-1)
//             {
//                 remainderResult.push_back(x);
//                 return remainderResult;
//             }        
//     }
//     return {-1};
// }
std::vector<int> howSum(int targetSum, std::vector<int> numbers, int size){
    if(targetSum < 0) return {-1};

    for(int i=0; i<size; i++){  
        int remainder = targetSum - numbers[i];
        if (remainder == 0) {
             return { numbers[i] };
        }
        std::vector<int> remainderResult = howSum(remainder, numbers, size);
        if(remainderResult[0] != -1) {
            remainderResult.push_back(numbers[i]);
            return remainderResult;
        }
    }
    return {-1};
}
int main()
{
    vector<int> arr= {8,3,3,4,4};

    int targetSum=8;

    vector<int> ans = howSum(targetSum,arr,5);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}