#include<bits/stdc++.h>
using namespace std;


void Leader(vector<int> &arr)
{
    vector<int> lead;
    for(int i=0;i<arr.size();i++)
    {
        bool flag=false;
        int j=i+1;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]<=arr[j])
            { flag=true;break;}
        }
        if(flag==false)
        cout<<arr[i]<<endl;
    }
}

// a better solution 
void leader(vector<int> arr)
{
    int cur_leader=arr[arr.size()-1];
    cout<<cur_leader;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]>cur_leader)
        {
            cur_leader= arr[i];
            cout<<" \n"<<cur_leader;   
        }
    }

}

int main()
{
    vector<int> arr={22,3,43,445,5};
    leader(arr);
    return 0;
}