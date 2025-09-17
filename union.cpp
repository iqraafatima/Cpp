#include<iostream>
using namespace std;

/*union employee{
int id;
char c;
float sal;

};*/

int main(){
    union employee{
int id;
char c;
float sal;
    };
union employee harry;
harry.id=1;
harry.sal=100;
cout<<harry.id<<endl;
cout<<harry.sal;

}