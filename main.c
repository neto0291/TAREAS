//
//  main.c
//  tarea1.1
//
//  Created by Ernesto Franco on 28/01/16.
//  Copyright © 2016 Ernesto Franco. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();


void selection(int i);

struct persona
{
    char nombre[40];
    char apellido[40];
    int edad;
    char rol[40];
    
    
} ;

typedef struct
{
    
    char nombre[30];
    int eslora;
    int manga;
    int maxtripulantes;
    
    
    
    
    
}barcos;


void agregabarcos()
{
    int b;
    int eslora;
    int manga;
    int maxtrip;
    
    printf("Cuantos barcos son: \n");
    scanf("%d", &b);
    barcos barco[b];
    
    for (int a=0; a<b; a++) {
        
        char nom[30];
        
        printf("Dame el nombre del barco\n");
        scanf("%s",nom);
        
        //barco[a].nombre=strcpy
        strcpy(barco[a].nombre, nom);
        
        
        printf("Dame el tamaño de su eslora\n");
        scanf("%d", &eslora);
        barco[a].eslora=eslora;
        
        
        
        printf("Dame el tamaño de su manga \n");
        scanf("%d", &manga);
        
        
        
        
        printf("Dame el número máximo de tripulantes\n");
        scanf("%d", &maxtrip);
    
        }
    
    
    
    menu();
    
    
    
    
}

void incorpora()
{
    
    
}

void asociados()
{
    
    
}

void verembarcaciones()
{
    
}

int main(int argc, const char * argv[]) {
    
    
    
    
    menu();
    
    
    
    
    return 0;
}


void selection(int i)
{
    
    
    
    
    
    switch (i) {
        case 1:
            agregabarcos();
            break;
        case 2:
            incorpora();
            break;
        case 3:
            asociados();
            break;
        case 4:
            verembarcaciones();
            break;
            
        default:printf("Opcion no valida");
            
            break;
    }
}


void menu()
{
    int i;
    
    printf(" 1. Agregar barcos\n");
    printf(" 2. Incorporar tripulantes y asociarlos a algun barco\n");
    printf(" 3. Tripulantes asociados a una embarcacion \n");
    printf(" 4. Ver embarcaciones\n\n");
    printf("Escoge un número\n");
    scanf("%d", &i);
    printf("Tu seleccionaste : %i \n", i);
    
    selection(i);
    
    

    
}

