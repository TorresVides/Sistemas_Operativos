/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Karol Dayan Torres Vides
 * Materia: Sistemas Operativos
 * Tema: Reto3
 * Objetivo: 
*************************************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;//declaramos un puntero de tipo entero para la variable ptr
    ptr=malloc(15 *sizeof(*ptr)); /*Con esta línea de código estamos añadiendo un bloque de  15
    enteros destinados para el espacio de memoria que vamos a asignar con malloc() a la variable ptr*/
    
    if(ptr !=NULL){//si no estamos en una posición nula
        *(ptr + 5)=480;/* Asignamos el dato 480 al sexto entero, esto lo podemos hacer porque
        accedemos al dato del puntero ptr con *(ptr)*/
    }
    return 0;

}