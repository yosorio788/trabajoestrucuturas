#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
int calcularsuma(int vec[],int);

int vec[100],tam;

int main(){
	
	pedirdatos();
	
	printf("\nla suma de los elementos del vector es: %d\n",calcularsuma(vec,tam));
	
	getch();
	return 0;
}
void pedirdatos(){
	printf("digite el numero de elementos del vector:");
	scanf("%d",&tam);
	
	for (int i=0; i<tam;i++){
			printf("digite un numero %d\n",i+1);
	
	scanf("%d",&vec[i]);
	}
}

int calcularsuma(int vec[], int tam){
	int suma;
	
	for(int i=0;i<tam;i++){
		suma += vec[i];
	}
	return suma;
}
