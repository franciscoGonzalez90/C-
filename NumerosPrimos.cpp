#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{ 
  int a;
  float resultado;
  
  cout << "Ingrese un numero:" << endl; cin >> a;

  if(a > 1)
  {
     resultado = sqrt(a); 
     
     for(int i = 2; resultado >=  i; i++)
     {
        if(a % i == 0)
        {
          cout << "No es un Numero Primo " << endl;
          cout << "Es divisible por " << i << endl;
          return 0;
        }
     }
  } 
  else if(a <= 1)
  {
    cout << "Ingrese un valor valido" << endl;
  }  
   
  return 0;
}
