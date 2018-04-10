
#include <stdio.h>
#include <conio.h>
main()
{
      int fila,columna,i,n;
      int matriz[3][3];
      printf("Ingrese la dimension de la fila: ");
      scanf("%d",&fila);
      printf("Ingrese la dimension de la columna: ");
      scanf("%d",&columna);
      matriz[1][1]=matriz[fila][columna];
      printf("\nMatriz de [%d]x[%d]\n",fila,columna);
      printf("\n");
      for(i=0;i<fila;i++){
        for(n=0;n<columna;n++){
            printf("Ingrese el valor de posicion [%d][%d]: ",i+1,n+1);
                scanf("%d",&matriz[i][n]);
                                              }
                          }
      printf("\nLa matriz diagonal:\n\n");
      for(i=0;i<fila;i++){
                          for(n=0;n<columna;n++){
                    printf("[%d]",matriz[i][n]);
 
                    }
                printf("\n");
                          }



    
	
	
	
      return 0;
}


