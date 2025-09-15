#include <iostream>
using namespace std;
int a=2;
void abc(){
    cout<<"\nglobal:"<<a;
}
int main() {
    int a=80;
    cout << "Hello, C++ is running successfully!" << endl<<a;
    abc();
}
