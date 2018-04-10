#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
const l=5;
void ordenar vector(int vector¨¨)	
	
	
	
char frase[40];
int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;

printf("Ingrese su nombre:");
fgets(frase,40,stdin);

for(int i=0;i<30;i++){
	switch(frase[i]){
	case 'a': vocal_a++; break; 
	case 'e': vocal_e++; break; 
	case 'i': vocal_i++; break; 
	case 'o': vocal_o++; break; 
	case 'u': vocal_u++; break; 
	
	}
}
printf ("vocal a %d \n",vocal_a);	
printf ("vocal e %d \n",vocal_e);
printf ("vocal i %d \n",vocal_i);
printf ("vocal o %d \n",vocal_o);
printf ("vocal u %d \n",vocal_u);

	getch();
	return 0;
}


