#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,a;
        int orig=x;
        if(orig<0)
        return false;
        while(x!=0)
        {
            a=x%10;
           rev=rev*10+a;
            x=x/10;
        }
        if(rev==orig){
            return true;
        }
        else
        return false;
    
     
    }
};
int main(){
int n;
    cout<<"enter no";
    cin>>n;
    Solution obj;
    bool ans=obj.isPalindrome(n);
    if(ans==true)
    cout<<"palin";
}