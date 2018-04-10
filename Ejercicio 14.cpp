

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas;
	char band='F';
	
	printf("Digite el numero de filas: "); 
	scanf("%d",&filas);
	printf("Digite el numero de columnas: "); 
	scanf("%d",&columnas);
	

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			
			printf("Digite un numero ");
			scanf("%d",&numeros[i][j]);
			
		}
	}
	
	//Comprobemos si es simetrica
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]){
					band='V';
				}
			}
		}
	}

	if(band=='V'){
		printf("\nEs una matriz simetrica");
	}
	else{
		printf("\nNo es una matriz simetrica");
	}
	
	
	getch();
	return 0;
}

