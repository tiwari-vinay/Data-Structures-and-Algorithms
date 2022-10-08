        // Question : Find out if the element is present twice or more?

#include<bits/stdc++.h>
using namespace std;

void Check_Duplicates(vector<int> arr)
{
    int n = arr.size();
    for(auto i: arr)
    {
        int tmp = i;
        for(auto j:arr)
        {
            if(tmp == j)
                {
                cout<<"Duplcate exist";
                return ;
                }
        }
    }

}

bool check_Duplicates(vector<int> arr)
{
    int n = arr.size();
    map<int,bool> m;
    for(int i = 0;i<n;i++)
    {
        if(m[arr[i]]){
            return true;
        }
        m[arr[i]]=true;
    }
    return false;
}

int main()
{
    vector<int> v{3,33,4,6,78,88,43,43};
    check_Duplicates(v)==1?cout<<"exist":cout<<"doesn't exist";
    return 0 ;
}