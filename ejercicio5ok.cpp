
#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
void maximo(TIPOD dato);

int main(){
	int dato1 = 4;
	int dato2 = 500;
	int dato3 = 8;
	int dato4 = 6;
	
	maximo(dato1);
	maximo(dato2);
	maximo(dato3);
	maximo(dato4);
	
	
	getch();
	return 0;
}

template <class TIPOD>
void maximo(TIPOD dato){
	
	printf("El dato es:%d\n",dato);
}
