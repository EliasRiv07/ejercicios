#include<iostream>
using namespace std;
int main (void){
    int num;
    cout<<"ingrese un numero que corresponde al dia de la semana para verficar si es dia laboral o fin de semana";
    cout<< "recuerda que :"<< "\n"<<"1=lunes    2=martes    3=miercoles     4=jueves    5=viernes"<< "\n"<< "6=sabado   7=domingo";
    cin>> num;
    if(num==1){
        cout<<"el numero ingresado corresponde a dia laboral";
    }
    if(num==2){
        cout<<"el numero ingresado corresponde a dia laboral";
    }
    if(num==3){
        cout<<"el numero ingresado corresponde a dia laboral";
    }
    if(num==4){
        cout<<"el numero ingresado corresponde a dia laboral";
    }
    if(num==5){
        cout<<"el numero ingresado corresponde a dia laboral";
    }
    if(num==6){
        cout<<"el numero ingresado corresponde a fin de semana";
    }
    if(num==7){
        cout<<"el numero ingresado corresponde a fin de semana";
    }

    return 0;
}
