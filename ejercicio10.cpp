#include <iostream>
using namespace std;
int main(void){
    float peso;
    cout<<"dime el peso de tu paquete""\n";
    cin>>peso;
    if(peso<=5){
    cout<<"se cobrara $5 por el peso";
    }
    else{
    if(peso>=6 && peso<=10){
        cout<<"se cobrara $10 por el peso";

    }
    else{
        cout<<"se cobrara $15 por el peso";
    }
    }


return 0;
}