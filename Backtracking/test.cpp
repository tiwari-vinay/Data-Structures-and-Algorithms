#include<bits/stdc++.h>
using namespace std;

// void countN(string s)
// {
//     int cnt = 0;
//     for(auto x : s)
//     {
//         if(x=='n' or x=='N')
//             cnt++;
//     }
//     return cnt;
// }

int main()
{
    fstream input,output;
    input.open("story.txt",ios::in);
    ofstream o;
    string line;
    o.open("stroy.txt");
    while(o)
    {
        getline(cin,line);
        cout<<line;
    }

    return 0;
}