#include<iostream>

using namespace std;

int main (){

    int i = 0, n = 0; 
    float fact = 1;

    cout<<"Ingrese un numero: ";
    cin>>n;

    for (i = 1; i <= n; i++){

        fact = fact * i;
    }

    cout<< "El factorial de "<< n <<" es igual a "<< fact;

    return 0;
}