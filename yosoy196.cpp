#include <string>
#include <iostream>
using namespace std;
#include "BigIntegerLibrary.hh"

bool is_palindrome(BigInteger a){
  string snumeros;
  string vnumeros;
  snumeros=bigIntegerToString(a);
  vnumeros=string (snumeros.rbegin(), snumeros.rend());
  return (snumeros==vnumeros);
}

bool apply196(BigInteger a){
  string snumeros;
  string vnumeros;
  snumeros=bigIntegerToString(a);
  vnumeros=string (snumeros.rbegin(), snumeros.rend());

  bigInteger b;
  for(i=1;i<=30; i++){
    if(snumeros!=vnumeros){
    b=stringToBigInteger(snumeros)+stringToBigInteger(vnumeros);
    snumeros=bigIntegerToString(b);
    vnumeros=string (snumeros.rbegin(), snumeros.rend());
  }else{
  return true;
  }
}
  return n;
}

int main() {
  int n1, n2, respaldo, rango,contadorpalindromo, contadornolyche, contadorlyche;

  cout << "Vamos a encontra numeros que sean palindromos" << endl;
  cout << "Necesito que me des 2 valores diferentes, para poder buscar en ese rango" << endl;
  cout << "Dame el valor número 1"<<endl;
  cin >> n1;
  cout << "Dame el valor número 2"<<endl;
  cin >> n2;

  if (n1>n2){
    respaldo=n2;
    n2=n1;
    n1=respaldo;
  }
  rango=(n2-n1)+1;

  BigInteger numeros[rango];
  for(int i=0; i<rango; i++){
    numeros[i]=n1+i;
    if(is_palindrome(numeros[i])==true){
      contadorpalindromo+=1;
    }else{
      if(apply196(numeros[i])==true){
        contadornolyche+=1;
      }else{
        cout<<"Encontramos un número magico Lycherel: "<<numeros[1]<<endl;
        contadorlyche+=1;
      }
    }
      }

  cout << "Los valores que me diste van de "<<n1<<" a "<<n2<<"así que tengo que evaluar "<<rango<<" números"<<endl;
  cout<<"Hay"<<contadorpalindromo<<" palindromos"<<endl;
  cout<<"Hay "<<contadorlyche<<" candidatos a numeros magicos Lycherel"<<endl
  cout<<"Hay "<<contadornolyche<<" numeros no magicos Lycherel"<<endl

  return 0;
}
