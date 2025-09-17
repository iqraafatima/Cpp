#include<iostream>
#include<string>
using namespace std;
  typedef struct employee{
        int id;
        string name;
        float sal;
    }a;
int main(){
  
    struct employee iqra;
    a rohan;
    iqra.id=5;
    rohan.sal=100;
    iqra.name="hello";
    cout<<iqra.id<<endl;
    cout<<rohan.sal<<endl;
    cout<<iqra.name;
}