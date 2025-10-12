#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    friend void sum(A, B);
};
class B
{
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    friend void sum(A, B);
};
void sum(A obj1, B obj2)
{
    cout << obj1.a + obj2.b;
}
int main()
{
    A obj3;
    B obj4;
    obj3.setdata(2);
    obj4.setdata(3);
    sum(obj3, obj4);
    return 0;
}