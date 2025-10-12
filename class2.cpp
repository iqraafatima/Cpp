#include<iostream>


#include<string>
using namespace std;
class student{
    int marks;
    string password;
    public:
    int id;
    string name;
    void see(int a,string b){
        marks=a;
        cout<<marks<<endl;
        password=b;
        cout<<b;

    }

};
int main(){
    student obj;
    obj.id=2;
    cout<<obj.id<<endl;
    obj.see(5,"qwer");
}