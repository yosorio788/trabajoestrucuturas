/*Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de 
cualquier número introducido por el usuario. Por ejemplo, si se introduce el número
256.879, debería desplegarse el número 0.879.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
float devolucionFraccionaria(float n);

float numero;

int main(){
	pedirDatos();
	
	scanf("La parte fraccionaria del numero es: %f",devolucionFraccionaria(numero));
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite un numero: ");
	scanf("%f",&numero;
}

float devolucionFraccionaria(float n){
	
	int entero = n;
	
	float resultado = n - entero;
	
	return resultado;	
}
