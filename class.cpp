#include<iostream>
using namespace std;

class abc{
    int a,b;
    public:
    int c,d;
    
    int sum(int a,int b){
        return a;
    }
    int mul(int c,int d){
        return c;
    }
};

int main(){
    abc obj;
    //obj.a=2;
    obj.c=5;
    //cout<<obj.a<<endl;
    cout<<obj.c;

}