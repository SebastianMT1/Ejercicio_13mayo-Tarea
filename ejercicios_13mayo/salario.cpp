#include<iostream>

using namespace std;

int main(){

    int horas= 0;
    float pago = 0, bruto = 0;
    string nombre;

    cout<<"Inserte su nombre: ";
    cin>>nombre;

    cout<<"Inserte sus horas de trabajo en el mes: ";
    cin>>horas;

    if (horas <= 160){

        pago = horas * 10;

        cout<<" El salario neto de "<<nombre<<" son "<<pago<<"$ mensuales libres de impuesto";
        
    }

    else if (horas > 160){

        pago = (160 * 10) + ((horas - 160) * 15);

        if (pago <= 2000)
        {
            cout<<" El salario neto de "<<nombre<<" son "<<pago<<"$ mensuales libres de impuesto";
        }
        
        else if (pago > 2001)
         {

            if (pago <= 2200)
            {
                bruto = (pago) - (pago*0.2);
                cout<<" El salario neto de "<<nombre<<" son "<<bruto<<"$ mensuales";
            }
            
            else if (pago >= 2201){

                bruto = (pago) - (pago*0.3);
                cout<<" El salario neto de "<<nombre<<" son "<<bruto<<"$ mensuales";
            }
         }    
    }

    return 0;
}