// #include<bits/stdc++.h>
// using namespace std;

// int countWays=0;
// int countConstruct(string target, vector<string> arr)
// {
//     if(target=="")  return 1;

//     for(auto x:arr)
//     {
//         if(target.find(x)==0)
//         {
//             string suffix=target.erase(0,x.length());
//             if(countConstruct(suffix,arr))
//                 countWays++;
//         }
        
//     }

//     return 0;
// }

// int main()
// {
//     string target = "abcf";
//     vector<string> worldBank = {"ab", "c","f","abs","helly","whs"};

//     // unordered_map<string,bool> memo;

//     countConstruct(target,worldBank);
//     cout<<countWays;
//     return 0;
// }


#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
bool flag=false;
int cnt=0;
bool constructstring(string target,vector<string>v)
{
    if(target.size()==0)
    {
        cnt++;
        flag=true;
        return true;
    }
    for(int i=0; i<v.size(); i++)
    {
        int found=target.find(v[i]);       //finds the word is present in the string or not.
        if(found==0)                      // checks the word is at the beginning of the string or not
        {
            string s;
            s=target;
            s.erase(0,v[i].size());
            constructstring(s,v);
        }
    }
    return false;
}
int main()
{
    string s="abcf";
   
    vector<string>v={"ab", "abc","c","f","abs","helly","whs"};
     
    constructstring(s,v);
    if(flag)cout<<cnt<<endl;
    else cout<<"no"<<endl;
    return 0;
}