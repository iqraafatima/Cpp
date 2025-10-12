/*Leetcode 720 709. To Lower Case
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.*/
#include<iostream>
#include<cctype>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
      int n=s.length();
      for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
      }  
      cout<<s;
      return s;
    }
};
int main(){
    Solution obj;
    obj.toLowerCase("HelloGooDMOrNING");
}