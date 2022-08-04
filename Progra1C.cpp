#include<iostream>

using namespace std;
 int main(){
    int n1, n2, suma=0, resta=0, multi=0, divis=0, modulo;
    cout<<"Bienvenido :)\nDigite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multi = n1 * n2;
    divis = n1 / n2;
    modulo = n1%n2;

    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es; "<<multi<<endl;
    cout<<"La division es: "<<divis<<endl;
    cout<<"El modulo es; "<<modulo<<endl;
    if (n1 > n2) {
        cout<< "El primer numero es mayor";
    }else if (n1 < n2){
        cout << "El segundo numero es mayor";
    }
    cout<<"\n--------------Gracias---------------";


    return 0;

}
