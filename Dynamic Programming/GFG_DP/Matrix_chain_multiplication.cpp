#include<bits/stdc++.h>
using namespace std;

int matrixChain(vector<int> arr,int start,int end)
{
    // first thing we need to partiotion the matrix, we have choices as from second element to second last element.

    // base case if we have only two element in the array then we can return 0(as only single matrix needs zero multiplication.)

    if(start+1==end)
        return 0;
    
    int res=INT_MAX;

    for(int i=start+1;i<end;i++)
    {
        res=min(res,
                matrixChain(arr,start,i)+
                matrixChain(arr,i,end)+
                arr[start]*arr[i]*arrr[end]
                );
    }
    return res;
}

// later I need to do dp solution of this problem.


int main()
{


    return 0;
}
