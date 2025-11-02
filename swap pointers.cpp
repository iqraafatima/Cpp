#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    int *c=&a;
    int *d=&b;
    int temp;
    temp=*c;
   *c=*d;
   *d=temp;
    cout<<"after swapping"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b;

}