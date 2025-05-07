#include <iostream>
using namespace std;
int main(void){
    string usuario="diego";
    string contrasena="leon2020";
    string u, c;
    cout <<"ingrese su usuario"<<"\n";
    cin>>u;
    cout<<"ingrse su contraseña"<<"\n";
    cin>>c;
    if(usuario==u && contrasena == c){
        cout<<"se ha ingresado de forma correcta"<<"\n";
    }    
    else {
        cout<<"su usuario o contraseña estan mal, vuelva a ingresar sus datos(le quedan dos intentos mas)"<<"\n";
        cout <<"ingrese su usuario"<<"\n";
        cin>>u;
        cout<<"ingrse su contraseña"<<"\n";
         cin>>c;

         if(usuario==u && contrasena == c){
            cout<<"se ha ingresado de forma correcta"<<"\n";
        }    
        else {
            cout<<"su usuario o contraseña estan mal, vuelva a ingresar sus datos(le quedan un intentos mas)"<<"\n";
            cout <<"ingrese su usuario"<<"\n";
            cin>>u;
            cout<<"ingrse su contraseña"<<"\n";
             cin>>c;
             if(usuario==u && contrasena == c){
        cout<<"se ha ingresado de forma correcta"<<"\n";
    }    
    else {
        cout<<"su usuario o contraseña estan mal, vuelva a ingresar sus datos"<<"\n";
        cout <<"ingrese su usuario"<<"\n";
        cin>>u;
        cout<<"ingrse su contraseña"<<"\n";
         cin>>c;
          if(usuario==u && contrasena == c){
        cout<<"se ha ingresado de forma correcta"<<"\n";
       
    }
    
        }

    }
    
}
    
    
    
    
    
    return 0;
}