//Autor: Suarez Lopez Diego Hipolito

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int Aux=0, a, n, c, band, b, f, j, i, k;

 printf("Introduzca cuanto numeros quiere generar para despues ordenar\n");
 scanf("%d",&n);

 int Arr[n];

 srand(time(NULL));

 for (a=0;a<n;a++)
 {
  Arr[a]=1+rand()%(30-1);
 }

 printf("El arreglo original es el siguiente: \n");
 for (a=0;a<n;a++)
 { 
  printf(" %d",Arr[a]);
 }

 printf("\n Ordenando...\n");

 c=0;

 //f=n-1;

  for (i = 0; i < n; i++) 
        {
         band = 0;
            for (j = i + 1; j < n; j++)
            {
 
                if (Arr[i] > Arr[j]) 
                {
 
                    a =  Arr[i];
                    Arr[i] = Arr[j];
                    Arr[j] = a;
                    band = 1;
                }
                
            }
            if (band == 1)
            {
         for(k = 0; k<n; k++)
                {
             printf(" %d",Arr[k]);
             }
             printf("\n");
             }
        }
        
 printf("\n \n");
 printf("El arreglo ordenado es el siguiente: \n");
 for (a=0;a<n;a++)
 { 
  printf(" %d",Arr[a]);
 }

 return 0;
}
