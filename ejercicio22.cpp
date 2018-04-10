
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int x,cont,z,i,tabla[10];
           
            i=0;
            for (x=1;x<=10;x++)
            {
        cont=0;
        if (x%2==0)
        {
           tabla[i]=x;
           i++;
        }
    }
           
            for (x=0;x<i;x++)
            {
        printf("%d\n",tabla[x]);
    }
           
    system("PAUSE");     
    return 0;
}

