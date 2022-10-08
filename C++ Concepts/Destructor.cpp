#include<bits/stdc++.h>
using namespace std;

// Constructor are used to initialize the objects.
// Constructor are called when an object is created. The number of times an object is created, constuctor will be called. There can be many types of constructors using the number of arguements used in the constructor. 
// Whereas the destructor is called in only one in number and it is called when an object is destroyed or goes out of scope. Use is recommended only when the copy object is created using dynamic memory allocation. 

class Test{
    int x;
    public:
    Test(int x):x(x){cout<<"constructor is called "<<x<<endl;}
    ~Test(){cout<<x<<"destructor is called";}
};
int main()
{
    Test t(50);
    {
        Test t2(40);
    }
    return 0;

}