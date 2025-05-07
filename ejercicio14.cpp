#include<iostream>
using namespace std;
int main(void){
 int year, res;
 cout<<"intrdouzca el año para verificar si es bisiesto \n";
 cin>> year;
 res=year%4;
 if(res==0){
    cout<<"el año es bisiesto";
 } else{
    cout<<"el año no es bisiesto";
 }
    return 0;
}