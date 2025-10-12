#include<iostream>
using namespace std;

  float sum(int a,int b)
 {
    return a+b;
 }
 int sum(int a,int b, int c){
    return a+b+c;
 }
 int main(){
    cout<<sum(1,5,9)<<endl;
    cout<<sum(1,2.9);
 }