#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int*p = arr;
    int i;

    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p++)<<endl;
    cout<<(++p);
}