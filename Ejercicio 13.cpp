/*Ejercicio 13: Realiza una funci�n que tome como par�metros un vector de enteros y su
tama�o e imprima un vector con los elementos impares del vector recibido.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void impares(int vec[],int);

int tam,vec[100];

int main(){
	pedirDatos();
	impares(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el tama�o del vector: ");
	scanf("%d",&tam);
	
	for(int i=0;i<tam;i++){
		printf("ingrese un numero %d",i+1);
		
		scanf("%d",&vec[i]);
	}
}

void impares(int vec[],int tam){
	int vecImpares[100];
	int j=0;
	for(int i=0;i<tam;i++){
		if(vec[i]%2!=0){
			vecImpares[j] = vec[i];
			j++;
		}
	}
	
	printf("\nImprimiendo los elementos impares del vector: ");
	for(int i=0;i<j;i++){
		
		
		cout<<vecImpares[i]<<" ";
	}
}
