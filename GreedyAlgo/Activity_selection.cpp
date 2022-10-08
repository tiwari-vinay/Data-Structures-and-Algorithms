//        Greedy : finding out the most optimal solution by seeing the current value, nothing else. We dont think of the future loss or gain.



#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a,pair<int,int> b)
{
    return (a.second<b.second);
}
int main()
{
    vector<pair<int,int>> a= {{4,5},{6,8},{4,9}};
    sort(a.begin(),a.end(),mycmp);
    int count=1;
    for(int i = 1;i<a.size();i++){
        if(a[i].first>a[i-1].second)
            count++;
    }
    cout<<"total count is: "<<count;


    return 0;
}