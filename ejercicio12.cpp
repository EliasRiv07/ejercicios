#include<iostream>
using namespace std;
int main (void){
float lad1, lad2, lad3;
cout<<" ingrese los valores de los tres lados de un triangulo \n";
cin>> lad1;
cin>>lad2;
cin>> lad3;
    if (lad1==lad2 && lad1==lad3){
        cout<<"es un triangulo equilatero";
    }
    if(lad1!=lad2 && lad1!=lad3){
        cout<<"es un triangulo escaleno";
    }
    if (lad1==lad2 && lad1!=lad3){
        cout<<"es un triangulo isoceles";
    }
    if (lad2==lad1 && lad2!=lad3){
    cout<<"es un trianuglo isoceles";
    }
    if(lad3==lad1 && lad3!=lad2){
        cout<<"es un triangulo isoceles";
    }
    return 0;
}