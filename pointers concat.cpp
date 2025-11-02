#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[20]="HELLO";
    char b[]="Morning";
    char *c=a;
    char *d=b;
 while(*c!='\0'){
    c++;
 }
 while(*d!='\0'){
    *c=*d;
    c++;
    d++;
 }
 *c='\0';
 cout<<a;
 return 0;
}