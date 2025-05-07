#include<iostream>
using namespace std;
int main(void){
    int nota;
    cout<<"ingrese la nota que ha sacado : \n";
    cin>> nota;
    if(nota>=60){
        cout<<"usted ha aprobado la materia";
    }else{
        cout<<"usted ha reprobado la materia";
    }

    return 0;
}