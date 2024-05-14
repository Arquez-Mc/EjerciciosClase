#include <iostream>
using namespace std;

int main (){

    float horas = 0;
    float horas1, horas2, salarioneto, impuesto;
    string nombre;


    cout << "Digite el nombre: ";
    cin >> nombre;
    cout << "Digite las horas trabajadas: ";
    cin >> horas;

    if(horas <=160 && horas>0){
        horas1 =horas;
        horas2 = 0;
    }
    
    else {
        horas1=160;
        horas2 = horas - 160;
    }
    salarioneto =horas1 * 10 + horas2 * 10 * 1.5;


    if(salarioneto <= 2000){
        impuesto = salarioneto * 0;
    }
    
    else if (salarioneto>2000 && salarioneto<2200)
    {
        impuesto = salarioneto * 0.2;
    }
    
    
    else{
        impuesto =salarioneto *0.3;
    }


    cout << "Buen dia "<<nombre << " sus datos sobre su salario son: "<<endl;
    cout << "Salario neto: " << salarioneto<<endl;
    cout << "\nEl impuesto a pagar es de: " << impuesto<<endl;
    cout << "\nSu salario total es: " << salarioneto-impuesto <<endl;

 

    return 0;
}