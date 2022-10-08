#include<bits/stdc++.h>
using namespace std;

union _Class{
    int x;
    int y;
    bool say;
};

// In case of union, values are overriden after one variable. The occupied space is of maximum variable declared.

int main()
{
   union _Class u1;
   u1.say=true;
   cout<<sizeof(u1)<<endl;

   u1.y=355;  
   cout<<sizeof(u1.y)<<endl;

   u1.x=34;
   cout<<sizeof(u1.y);
  
 
    return 0;
}