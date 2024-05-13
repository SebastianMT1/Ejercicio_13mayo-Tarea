#include<iostream>

using namespace std;

int main (){

    int piso = 0;

    cout<<"A que piso deasearia ir (1-25)?\n";
    cin>>piso;

    switch (piso){
        
        case 1:
        cout<<"subir";
        break;

        case 25:
        cout<<"bajar";
        break;
        
    default:
    cout<<"Subir \nBajar";

        break;
    }
    

    return 0;
}