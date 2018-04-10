/*Ejercicio 12: Realice una funci�n que tome como par�metros un vector y su tama�o y 
diga si el vector est� ordenado crecientemente. Sugerencia: compruebe que para todas 
las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que
el elemento que le precede en el vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void comprobarOrdenamiento(int vec[],int);

int vec[100],tam;


int main(){
	pedirDatos();
	comprobarOrdenamiento(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de elementos del vector: ");
	scanf("%d",&tam);
	
	for(int i=0;i<tam;i++){
		printf("Digite un numero: ",i+1);
		scanf("%d",&vec[i]);
	}
}

void comprobarOrdenamiento(int vec[],int tam){
	char band = 'F';
	
	//1 2 3 4 5
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		printf("\nEl arreglo esta ordenado en forma creciente");
	}
	else{
		printf("\nEl arreglo no esta ordenado");
	}
}
