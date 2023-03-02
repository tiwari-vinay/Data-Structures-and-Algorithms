#include<bits/stdc++.h>
using namespace std;

// Virtual function is used to achieve the runtime polymorphism. Irrespective of what is the type of the 
// pointer of reference is used to call the function, always the correct member function should be called. 

class Base{
    public:
        virtual void print()
        {
            cout<<"this is base class print()"<<endl;
        }
        void show()
        {
            cout<<"this is base class show()"<<endl;
        }
};
class Derived: public Base{
    public:
        void print()
        {
            cout<<"this is the derived class print()"<<endl;
        }
        void showData()
        {
            cout<<"this is derived class show()"<<endl;
        }
};

int main()
{
    Base obj;
    obj.print();
    Base *ptr;
    Derived d;
    ptr=&d;
    ptr->print();
    ptr->show();
    // ptr->showData()  -- this is not possible because the pointer is of base type and we are calling the function of the derived class. This will definitely produce error.
    return 0;
}