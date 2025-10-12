#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void sum(abc obj);
};
void sum(abc obj){
    cout<<obj.a+obj.b;
}
int main(){
abc obj1;
obj1.getdata(2,3);
sum(obj1);
}