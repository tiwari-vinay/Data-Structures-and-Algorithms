#include<bits/stdc++.h>
using namespace std;

class Girls{

     int age;
    public: 
        Girls(int age)
        {
            this->age=age;
        }
    void print()
    {
        cout<<this->age;
    }
};

int main()
{
    Girls G1(30);
    G1.print();
    
    return 0;
}