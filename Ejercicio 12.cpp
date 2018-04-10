
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void cambiarSigno(int vec[],int);
void mostrarVector(int vec[],int);


int vec[100],tam;

int main(){
	//Llamada a las funciones - en orden
	pedirDatos();
	cambiarSigno(vec,tam);	
	mostrarVector(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("digite el tamaño del vector:");
	scanf("%d",&tam)
	
	for(int i=0;i<tam;i++){
		
			printf("digite un numero: %d\n",i+1);
	
		scanf("%d",&vec[i]);
		
	
	}
}

void cambiarSigno(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
}

void mostrarVector(int vec[],int tam){
	cout<<"\nMostrando vector con cambio de signo: "<<endl;
	for(int i=0;i<tam;i++){
		printf(vec[i],"");
}
