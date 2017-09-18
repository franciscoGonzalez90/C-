#include <iostream>

using namespace std;

int main()
{

   const float PI = 3.1416;
   int op;
   float diametro,radio;

   do
   { 
     cout << "MEDIR LA LONGITUD DE UNA CIRCUNFERENCIA" << endl;
     cout << "****** MENU ******" << endl;
     cout << "1.-Ingresar Diametro" << endl;
     cout << "2.-Ingresar Radio" << endl;
     cout << "Presione cualquier tecla para salir" << endl;
     cout << "INGRESE UNA OPCION" << endl;
     cin >> op;

     switch(op)
     {
       case 1:
	     cout << "Ingrese el diametro: " << endl;
	     cin >> diametro;
	     cout << "La longitud es: " << PI * diametro << "\n" <<  endl;
	     break;
       case 2:
	     cout << "Ingrese el radio: "  << endl;
	     cin >> radio;
	     cout << "La longitud es: " << (PI * PI) * radio << "\n"  << endl;
	     break;
       default:
	     cout << "Esta saliendo del programa\n" << endl;
	     return 0;
     } 
   }
   while(op == 1 || op == 2);   

   return 0;
}
