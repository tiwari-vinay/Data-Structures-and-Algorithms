#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> sol(string target,vector<string> wordBank)
{
    vector<vector<string>> table(target.length()+1);

    for(int i=0;i<=target.length();i++)
    {
        for(auto word:wordBank)
        {
            if(target.find(word)==0)
            {
                
            }
        }
    }

}

int main()
{
   string target = "abcdef";
   vector<string> wordBank={"ab","abc","cd","def","ef","abcd","c"};
   vector<vector<string>> ans=allConstruct(target,wordBank);
   for(auto x: ans)
   {
      for(auto y:x)
         cout<<y<<",";
      cout<<endl;
   }
   return 0;
}