/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Karol Dayan Torres Vides
 * Materia: Sistemas Operativos
 * Tema: Reto05
 * Objetivo: 
*************************************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,i, *ptr;/*declaramos los enteros n,i y sum, la variable sum la inicializamos en cero */
    printf("Enter size: ");//pedimos la cantidad de direcciones a asignar
    scanf("%d", &n1);//escaneamos el tamaño, es decir n1
    ptr=(int*)calloc(n1, sizeof(int));//asignamos memoria
    printf("Addresses previusly allocated memory");
       
        
    
    for(i=0;i<n1;++i){/* Mostramos las direcciones, si previamente se ingresó el número 3 por ejemplo,
    veremos tres direcciones de memoria*/
        printf("\n\np=%p\n",ptr+i);}
    printf("\nEnter the new size: ");/*Pedimos el nuevo tamaño, es decir la cantidad de direcciones 
    que queremos ver */
    scanf("%d", &n2);//escaneamos el nuevo tamaño
    
    ptr=realloc(ptr,n2*sizeof(int));/*reasignamos memoria haciendo uso de realloc() para ptr, ¿Cuanta memoria?
    n2 por el tamaño de int*/
    printf("Addresses of newly allocated memory");
        
    for(i=0; i<n2; ++i)/* Mostramos estas  direcciones reasignadas*/
        printf("\n\np = %p\n",ptr+i);
    
    free(ptr);//liberamos memoria 
    
    
    return 0;

}