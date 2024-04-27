/**
 * @file NUMEROMAYOR.c
 * @author jose riofrio (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main (){

int numero1, numero2;

printf("Ingrese el primer numero: ");
scanf("%d", &numero1);
printf("Ingrese el segundo numero: ");
scanf("%d", &numero2);
getchar();

if (numero1 > numero2){
      printf("El %d es el número  mayor. \n",numero1);
   }
   else{
      printf("El %d es el número es mayor. \n",numero2);
   }


return 0;
}