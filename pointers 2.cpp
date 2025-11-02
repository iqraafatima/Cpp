#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=8;
    int *c=&a;
    int *d=&b;
    cout<<c<<endl;
    cout<<*c+*d;

}
