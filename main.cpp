#include <iostream>
#include "UFunciones.h"

using namespace std;

int main()
{ unsigned int opcion=0;
  unsigned int n=0,n1=0,n2=0;
  unsigned int dividendo=0, divisor=0;
  unsigned int num=0;

  do{
    cout << "\n\n";
    cout << "M E N U \n";
    cout << "[1] Factorial \n";
    cout << "[2] Multiplicar dos numeros enteros positivos mayores a 1 \n";
    cout << "[3] Cociente de dos numeros enteros positivos \n";
    cout << "[4] La sumatoria de los n primeros numeros naturales \n";
    cout << "[5] Fin \n\n";

    do{
      cout << "Seleccione una opcion : ";
      cin >> opcion;
    }while(opcion<1 || opcion >5);

    switch(opcion)
    {
      case 1: //--[1] Factorial
              cout << "\n\nHalla el factorial de un numero entero \n";
              cout << "Numero : ";
              cin >> n;
              cout << "El factorial es : " << Factorial(n) << "\n";
              break;
      case 2:// -- [2] Multiplicar dos numeros enteros positivos mayores a 1
             cout << "Multiplicar dos numeros enteros positivos mayores a 1\n";
             cout << "Numero 1 : ";
             cin >> n1;
             cout << "Numero 2: ";
             cin >> n2;
             cout << "El producto es : " << producto(n1,n2) << "\n";
             break;

      case 3://--[3] Cociente de dos numeros enteros positivos
             cout << "\n[3] Cociente de dos numeros enteros positivos\n";
             cout << "Dividendo: ";
             cin >> dividendo;
             cout << "Divisor : ";
             cin >> divisor;
             cout << "El cociente es : " << cociente(dividendo, divisor) << "\n";
             break;
      case 4: //--"[4] La sumatoria de los n primeros numeros naturales
             cout <<"\nSumatoria de los n primeros numeros naturales\n";
             cout << "Ingrese n: ";
             cin >> num;
            // cout << "La sumatoria es : " << Sumatoria(num)<< "\n";
    }
  }while(opcion!=5);
  cout << "Chao.";
  return 0;
}



