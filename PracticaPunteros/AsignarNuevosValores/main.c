#include <stdio.h>
#include "funciones.h"

int main (void)
{
   int var, nuevo;
   
   printf("Introduc√≠ una variable: ");
   scanf("%d", &var);
   
   printf("Introduc√≠ otra variable que reemplazar√° a la primera: ");
   scanf("%d", &nuevo);
   
   modificaVar( &var, nuevo);
   
   printf("\nEl nuevo valor de la variable es: %d \n", var);

return 0;
}

