/*Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como
par�metros, multiplique estos dos n�meros y despliegue el resultado*/

#include <iostream>
using namespace std;
#include <stdio.h>

float mult(float a, float b)
{
  float respuesta;
  respuesta=a*b;
  return respuesta;
}
int main()
{
  float num1, num2, respuesta;
  printf("ingrese un valor para numero 1:");
  scanf("%f", &num1 );
  printf("ingrese un valor para numero 2:");
  scanf("%f", &num2);
  respuesta= mult(num1,num2);
  printf("%1.1f * %1.1f=%1.1f\n",num1,num2,respuesta);
  return 0;
  
}
