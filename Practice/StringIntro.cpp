#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int n = arr.size();
    int  ans;


    return ans; 
}

int main()
{
    string s1= "hello vinay";
    string s2= "yaniv olleh";


    // string to c-style string
    // string s="hello there";
    // char c[s.length()];
    // strcpy(c,s.c_str());

  

    // find() returns the position of the string
    // cout<<s.find("l");

    //substr(x,y)-> returns the string from x to y 
    //  cout<<s.substr(1,7);

    // string comparison is done character by character, evaluates the values by comparing the ascii values of the character till the end of the end of the string.
    // cout<<(s1==s2)<<endl;
    // cout<<(s1>s2)<<endl;
    // cout<<(s1<s2)<<endl;

    // reverse of a string 

    // int l=s1.length()-1;
    // while(l>=0)
    // {
    //     s2+=s1[l];
    //     l--;
    // }
    // s2.clear(); 
    // for(auto itr=s1.rbegin();itr!=s1.rend();itr++)
    //    s2+=*itr;
    // cout<<s2;


    // Palindrome 
    int i = 0;
    int j = s1.length()-1;
    string p;
    while(i<j)
    {
        if(s1[i]==s1[j])
        {
            i++;j--;p="palindrome";
        }
        else
        {
             p="not a palindrome";
             break;
        }
    }
    
    return 0 ;
}