#include <iostream>
using namespace std;

int main (){
    int numero, factorial=1;
    
    cout<<"Por favor digite algun numero entero ";
    cin>>numero;
    
    for(int i=1;i<=numero;i++){
        
        factorial=factorial*i;
    }
    cout<<endl<<"El resultado de su numero factorial es: "<<factorial<<endl;
    
    
 return 0;   
}