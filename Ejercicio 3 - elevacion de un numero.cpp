/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que 
se le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void funpot(int x,int y);

int numero,exponente;

int main(){
	pedirDatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el numero a elevar: ");
	scanf("%d",&numero);
	printf("Digite el exponetente de elevacion: ");
	scanf("%d",&exponente);
}

void funpot(int x,int y){
	long resultado=1;
	
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	scanf("El resultado de la elevacion es: %li",resultado);
}
