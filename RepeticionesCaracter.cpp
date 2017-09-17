#include <iostream>

using namespace std;

int main()
{
  string palabra;
  char letra;
  int contador=0;


  cout << "Ingrese la palabra: " << endl; cin >> palabra;
  cout << "Ingrese la letra que busca: " << endl; cin >> letra;

  for(int i = 0; i < palabra.length(); i++)
  {
     if(palabra[i] == letra)
     {
       contador++;
     }  
  }

  cout << "La palabra " << palabra << " tiene " << contador << " " << letra << endl;

  //cout << palabra.length() << endl;

  return 0;
}
