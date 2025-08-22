/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Karol Dayan Torres Vides
 * Materia: Sistemas Operativos
 * Tema: Reto4
 * Objetivo: 
*************************************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i, *ptr,sum=0;/*declaramos los enteros n,i y sum, la variable sum la inicializamos en cero */
    printf("Enter number of elements:");
    scanf("%d", &n);//escaneamos los elementos ingresados 
    ptr=(int*)calloc(n, sizeof(int));//asignamos memoria
    if(ptr==NULL)
    printf("Enter elements: ");//ingresamos los números a sumar
        printf("Error! memory not allocated");
        exit(0);
        
        
    
    for(i=0;i<n;++i){//sumamos los números
        scanf("%d",ptr + i);
        sum +=*(ptr+i);
        
    }
    printf("Sum=%d",sum);//imprimimos la suma
    free(ptr);//liberamos memoria 
    
    
    return 0;

}