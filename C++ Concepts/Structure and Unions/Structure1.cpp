#include<bits/stdc++.h>
using namespace std;

 struct Class{
    int roll_no;
    string name;
    string stream;
};

int main()
{
    struct Class s1,s2;
    s1.name="Vinay Tiwari";
    s2.name="Akanksha Singh";
    
    s1.roll_no=1;
    s2.roll_no=2;

    s1.stream="CSE";
    s2.stream="CHEMISTRY";

    cout<<"Name         "<<"Roll No         "<<"Stream      "<<endl;
    cout<<s1.name<<"        "<<s1.roll_no<<"    "<<s1.stream<<endl;
    cout<<s2.name<<"        "<<s2.roll_no<<"    "<<s2.stream<<endl;
    return 0;
}