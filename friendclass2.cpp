#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void setdata(int x){
        a=x;
    } 
    friend void add(A,B);
};
class B{
    int b;
    public:
    void setdata(int y){
        b=y;
    }
    friend void add(A,B);
};

void add(A o1, B o2){
    cout<<"sum = "<<o1.a+o2.b;
}
int main(){
    A obj1;
    B obj2;
    obj1.setdata(3);
    obj2.setdata(5);
    add(obj1,obj2);

}