

#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg,horas,min,seg;
	
	printf("Digita la cantidad de segundos: ");
	scanf("%d",&totalSeg);
		
	tiempo(totalSeg,horas,min,seg);
	
	printf("Horas: %d\n",horas);
	printf("Minutos: %d\n",min);
	printf("Segundos: %d\n",seg);
	
	getch();
	return 0;
}

void tiempo(int totalSeg,int& horas,int& min,int& seg){	
	horas = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60; 
}

