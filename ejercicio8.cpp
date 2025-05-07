#include<iostream>
using namespace std;
int main(void){
    string contra="hola";
    string usuario="elias";
    string u, c;
    cout<<"ingrese el usuario: ";
    cin>>u;
    cout<<"ingrese la contraseña: ";
    cin>>c;

    if (contra==c && usuario==u){
        cout<<"datos validos";
    }else {
        cout<<"datos invalidos";

    }
    return 0;
}