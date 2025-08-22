/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Karol Dayan Torres Vides
 * Materia: Sistemas Operativos
 * Tema: Reto2
 * Objetivo: 
*************************************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *q=NULL;//declaramos q de la misma forma y le asignamos NULL
    printf("Requesting space for\"Goodbye\"n");
    
    q=(char*)malloc(strlen("Goodbye")+1);/* Con malloc asignamos espacio de memoria de tipo char
    ¿Exactamente cuánto espacio? con strlen tomamos la longitud de "Goodbye" y le sumamos 1*/
    if(!q){//Tenemos esta condicion si hemos fallado en asignar espacio
        perror("Faliled to allocate space because");/*usamos perror para mostrar si no fué 
        posible asignar espacio */
        exit (1);
    }
    
    printf("About to copy \"Goodbye\" to q at address %s\n",q);
    strcpy(q, "Goodbye");/* Copiamos la palabra "Goodbye" a q en la 
    dirección especificada*/
    printf("String copied");
    printf("%s\n",q);/* Mostramos q*/
    return 0;

}