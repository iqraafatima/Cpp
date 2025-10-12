//overloading operator to add object and int
#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void getdata(int x)
    {
        a=x;
    }

    //operator overloading
    int operator + (int b)
    {
        return a+b;//adds obj and int(a is a part of class A's obj)
    }

};

int main(){
    A obj;
    obj.getdata(2);
    cout<<obj+5;
}