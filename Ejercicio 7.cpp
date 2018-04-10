
#include<iostream>
#include<conio.h>
using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	printf("Digite un valor: ");
	scanf("%d",&valor);

	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	printf("Cantidad de billetes a entregar como cambio:\n");
	printf("Cien: %d\n",cien);
	printf("Cincuenta: %d\n",cincuenta);
	printf("Veinte: %d\n",veinte);
	printf("Diez: %d\n",diez);
	printf("Cinco: %d\n",cinco);
	printf("Uno: %d\n",uno);
	
	getch();
	return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;
}
