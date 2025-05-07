#include <iostream>
using namespace std;

int main(void){
    int edad, infracciones, exp;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese el numero de infracciones: ";
    cin >> infracciones;

    cout << "Ingrese los años de experiencia: ";
    cin >> exp;
    if(edad >= 25){
        if(infracciones == 0){
            if(exp >= 5){
                cout << "Estado del conductor: Excelente\n";
            }
            else{
                cout << "Estado del conductor: Bueno\n";
            }
        }
        else{
            if(infracciones <= 2){
                cout << "Estado del conductor: Regular\n";
            }
            else{
                cout << "Estado del conductor: Malo\n";
            }
        }
    }
    else{
        if(edad >= 18){
            if(infracciones == 0){
                if(exp >= 2){
                    cout << "Estado del conductor: Aceptable\n";
                }
                else{
                    cout << "Estado del couctor: Inexperto\n";
                }
            }
            else{
                cout << "Estado del conductor: Riesgoso\n";
            }
        }
        else{
            cout << "No es un conductor válido (menor de edad)\n";
        }
    }

    return 0;
}