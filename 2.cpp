//Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del valor que se le
//transmite y despliegue el resultado. La funci�n deber� ser capaz de elevar al cuadrado n�meros con puntos decimales.

#include<iostream>
#include <cmath>
using namespace std;

double al_cuadrado(double x){
  double cuadrado;
  cuadrado= x*x;
  return cuadrado;
}
int main(){
  double numero, resultado;
  printf("ingrese un numero\n");
  scanf("%lf",&numero);
  
  resultado=al_cuadrado(numero);
  printf("el resultado es: %1.1lf",resultado);
 
   
  
  
  
  
  return 0;
}

