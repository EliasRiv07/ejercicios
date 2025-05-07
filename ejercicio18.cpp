#include<iostream>
using namespace std;
int main(void){
    string contra1, contra2;
    cout<<"ingrese su nueva contraseña \n";
    cin>>contra1;
    cout<<"ingrese la contraseña nuevamente para verificar \n";
    cin>>contra2;
    if( contra1==contra2){
        cout<<"su contraseña es valida";
    }
    else {
        cout<<"su contraseña no es valida";
    }
    return 0;
}