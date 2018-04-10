

#include<iostream>
#include<conio.h>
using namespace std;

void calc_anios(int,int&,int&,int&);

int main(){
	int totalDias,ano,mes,dia;
	
	printf("Digite el numero total de dias transcurridos: ");
	scanf("%d",&totalDias);
	
	calc_anios(totalDias,ano,mes,dia);
	
	printf("Fecha Actual: %d,%d,%d",dia+1,"/",mes+1,"/",ano+2000);	
	
	getch();
	return 0;
}

void calc_anios(int totalDias,int& ano,int& mes,int& dia){
	ano = totalDias/365;
	totalDias %= 365;
	mes = totalDias/30;
	dia = totalDias%30;
}

