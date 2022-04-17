/*
 ============================================================================
 Name        : TP_1.c
 Author      : Hebe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //biblioteca para getch()
#include "TP_1.h"

int main(void) {

	setbuf(stdout, NULL);
	char salir = 'n';
	    //int flag = 0;
	    int flagIngresoKm = 0;
	    int flagIngresoPrecio = 0;
	    int flagCalculoCostos = 0;
	    int pFlagIngresoKm = 0;
	    int pFlagIngresoPrecio = 0;
	    int pFlagCalculoCostos = 0;
	    int pFlag = 0;
	    /*int km;
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
	    float difPrecio;*/

	    do{

	        switch(menu()){//llamo a la funcion menu
	        case 1:
	            ingresarKm(&flagIngresoKm);
	    //getch();//o system("pause");
	            break;
	        case 2:
	            ingresarPrecio(flagIngresoKm, &flagIngresoPrecio);
	            break;
	        case 3:
	            calcularCostos(flagIngresoPrecio, &flagCalculoCostos);
	            break;
	        case 4:
	            informarResultados(&flagIngresoKm, &flagIngresoPrecio, &flagCalculoCostos);
	            break;
	        case 5:
	            cargarDatos();
	            break;
	        case 6:
	            confirmar(&salir);
	            break;
	        case 7:
	            informarNoEsNumero();
	            break;
	        default:
	            printf ("Opcion invalida");
	        }
	        fflush(stdin);
	        getch();
	    }while(salir != 's');
	    return 0;
	}
