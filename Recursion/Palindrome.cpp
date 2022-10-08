#include<iostream>
using namespace std;
 bool Palindrome(string str,int start,int end)
 {
     if(start>=end) return true;
     return (str[start]==str[end] && Palindrome(str,start+1,end-1));

 }
 int main()
 {
     string str="hellooleh";
     cout<<Palindrome(str,0,str.length()-1);
     return 0;
 }