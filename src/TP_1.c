/*
 * TP_1.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Hebe
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int menu (){
    int opcion;
    int cant;

    system ("cls");
    printf (" *** Menu de Opciones ***\n\n");
    printf("1 - Ingresar km\n");
    printf("2 - Ingresar precios de Vuelos\n");
    printf("3 - Calcular todos los costos\n");
    printf("4 - Informar resultados\n");
    printf("5 - Carga forzada\n");
    printf("6 - Salir\n");

    printf("Ingrese opcion: ");

    fflush(stdin);

    cant = scanf("%d",&opcion);

    if (cant == 0){
        opcion = 7;
    }
    return opcion;
}

int ingresarKm(int* pFlag){

    int todoOk = 0;
    int km;
    if(pFlag != NULL){
        printf("Ingrese los km del vuelo\n");
        scanf("%d", &km);
        *pFlag = 1;
        todoOk = 1;
    }
    return todoOk;
}



int ingresarPrecio(int flagIngresoKm, int* pFlag){
    int todoOk = 0;
    float precioAerolineas;
    float precioLatam;
    if(pFlag != NULL && flagIngresoKm >= 0 && flagIngresoKm <= 1){
            if(flagIngresoKm){//flagIngresoKm == 1
                printf("Ingrese precio vuelo Aerolineas\n");
                scanf("%f", &precioAerolineas);
                printf("Ingrese precio vuelo Latam\n");
                scanf("%f", &precioLatam);
                flagIngresoKm = 1;
            } else {
                printf("Antes de ingresar el precio primero ingrese los km");
            }
            todoOk =1;
}
    return todoOk;
}

void calcularCostos(int flagIngresoPrecio, int flagIngresoKm){

    int todoOk = 0;
    int flagCalculoCostos = 0;
    int km;
    float precioAerolineas;
    float precioLatam;
    float precioTDA;
    float precioTCA;
    float precioBTCA;
    float precioKmA;
    float precioTDL;
    float precioTCL;
    float precioBTCL;
    float precioKmL;
    float difPrecio;


    if( flagIngresoKm != NULL && flagIngresoPrecio != NULL && flagCalculoCostos >= 0 && flagCalculoCostos <= 1){
        if(flagCalculoCostos){//si cargué los precios entré a este if
            precioTDA = precioAerolineas * 0.9;
            precioTCA = precioAerolineas * 1.25;
            precioBTCA = precioAerolineas / 4606954.55;
            precioKmA = precioAerolineas / km;
            precioTDA = precioLatam * 0.9;
            precioTCA = precioLatam * 1.25;
            precioBTCA = precioLatam / 4606954.55;
            precioKmA = precioLatam / km;
            if(precioAerolineas> precioLatam){
            difPrecio = precioAerolineas - precioLatam;
            } else {
            difPrecio = precioLatam - precioAerolineas;
            }
            flagCalculoCostos = 1;
        } else if(flagIngresoPrecio){//como estoy en el else no se brindó
            printf("Antes de hacer los cálculos, primero se debe cargar el precio\n");
        } else {
            printf("Antes de hacer los cálculos, primero se debe cargar los km\n");
        }
    todoOk =1;
}
    return todoOk;
}


void informarResultados(int* pFlagIngresoKm, int* pFlagIngresoPrecio, int* pFlagCalculoCostos){

    int todoOk = 0;
    int km;
    float precioAerolineas;
    float precioLatam;
    float precioTDA;
    float precioTCA;
    float precioBTCA;
    float precioKmA;
    float precioTDL;
    float precioTCL;
    float precioBTCL;
    float precioKmL;
    float difPrecio;

    if(pFlagCalculoCostos != NULL && pFlagIngresoPrecio != NULL && pFlagIngresoKm != NULL){
        if(*pFlagCalculoCostos){//si brindé entré a este if
            printf ("\n");
            printf ("KMs Ingresados: %d\n", km);
            printf ("\n");
            printf ("Precio Aerolineas: $ %.2f\n", precioAerolineas);
            printf ("a)Precio con tarjeta de debito: $ %.2f\n", precioTDA);
            printf ("b)Precio con tarjeta de credito: $ %.2f\n", precioTCA);
            printf ("c)Precio pagado con bitcoin: $ %.2f\n", precioBTCA);
            printf ("d) Mostrar precio unitario: $ %.2f\n", precioKmA);
            printf ("\n");
            printf ("Precio Latam: $ %.2f\n", precioLatam);
            printf ("a)Precio con tarjeta de debito: $ %.2f\n", precioTDL);
            printf ("b)Precio con tarjeta de credito: $ %.2f\n", precioTCL);
            printf ("c)Precio pagado con bitcoin: $ %.2f\n", precioBTCL);
            printf ("d) Mostrar precio unitario: $ %.2f\n", precioKmL);
            printf ("\n");
            printf ("La diferencia de precio es: $ %.2f", difPrecio);
            *pFlagCalculoCostos = 0;
            *pFlagIngresoPrecio = 0;//doy de baja las  banderas
            *pFlagIngresoKm = 0;//doy de  baja las  banderas
        } else if(*pFlagIngresoPrecio){//como estoy en el else no se brindó
            printf("Antes de informar los resultados, primero se debe cargar los precios de los vuelos\n");
        } else {
            printf("Antes de informar los resultados, primero se debe cargar los km\n");
        }

    todoOk = 1;

    return todoOk;
}
}


void confirmar(char* x){
    printf("Confirma salida?: \n");
    fflush(stdin);
    scanf("%c", x);
}


void informarNoEsNumero(){
    printf("Eso no es un numero\n");

    return 0;
}

int cargarDatos(){

    int km = 7000;
    float precioAerolineas = 230000;
    float precioLatam = 220000;
    float precioTDA;
    float precioTCA;
    float precioBTCA;
    float precioKmA;
    float precioTDL;
    float precioTCL;
    float precioBTCL;
    float precioKmL;
    float difPrecio;


    precioTDA = precioAerolineas * 0.9;
    precioTCA = precioAerolineas * 1.25;
    precioBTCA = precioAerolineas / 4606954.55;
    precioKmA = precioAerolineas / km;
    precioTDL = precioLatam * 0.9;
    precioTCL = precioLatam * 1.25;
    precioBTCL = precioLatam / 4606954.55;
    precioKmL = precioLatam / km;

    if(precioAerolineas> precioLatam){
        difPrecio = precioAerolineas - precioLatam;
    } else {
        difPrecio = precioLatam - precioAerolineas;
    }

    system("cls");
    printf ("\nKMs Ingresados: %d\n", km);
    printf ("\n");
    printf ("Precio Aerolineas: $ %.2f\n", precioAerolineas);
    printf ("a)Precio con tarjeta de debito: $ %.2f\n", precioTDA);
    printf ("b)Precio con tarjeta de credito: $ %.2f\n", precioTCA);
    printf ("c)Precio pagado con bitcoin: $ %.2f\n", precioBTCA);
    printf ("d) Mostrar precio unitario: $ %.2f\n", precioKmA);
    printf ("\n");
    printf ("Precio Latam: $ %.2f\n", precioLatam);
    printf ("a)Precio con tarjeta de debito: $ %.2f\n", precioTDL);
    printf ("b)Precio con tarjeta de credito: $ %.2f\n", precioTCL);
    printf ("c)Precio pagado con bitcoin: $ %.2f\n", precioBTCL);
    printf ("d) Mostrar precio unitario: $ %.2f\n", precioKmL);
    printf ("\n");
    printf ("La diferencia de precio es: $ %.2f", difPrecio);

    return 0;
}
