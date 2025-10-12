#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void getdata(int x=0){
        a=x;
    }

    A operator -(){
        A obj; //create temp obj
        obj.a=-a; //assign value
        return obj; //return result
    }
    void show(){
        cout<<a<<endl;
    }
};
int main(){

    A obj1;
    obj1.getdata(2);
    //cout<<-obj1;
    A obj2;
    obj2=-obj1;
    obj2.show();
}