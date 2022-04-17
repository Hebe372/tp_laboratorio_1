/*
 * TP_1.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Hebe
 */

#ifndef TP_1_H_INCLUDED
#define TP_1_H_INCLUDED




void calcularCostos(int flagIngresoPrecio, int flagIngresoKm);
void informarResultados(int* pFlagIngresoKm, int* pFlagIngresoPrecio, int* pFlagCalculoCostos);
void confirmar(char* x);
void informarNoEsNumero();
int cargarDatos();



/** \brief imprime el menu de opciones
 *
 * \param opcion
 * \param cant
 * \return int opcion
 *
 */
int menu ();

/** \brief ingresa el valor de los km
 *
 * \param int* pFlag
 * \param int todoOk
 * \param int km
 * \return *pFlag
 * \return todoOk
 *
 */
int ingresarKm(int* pFlag);

/** \brief ingresa los precios de los pasajes aereos
 *
 * \param int* pFlag
 * \param todoOk
 * \param int flagIngresoKm
 * \param int* pFlag
 * \param float precioAerolineas
 * \param float precioLatam
 * \return *pFlag
 * \return todoOk
 *
 */
int ingresarPrecio (int flagIngresoKm, int* pFlag);

/** \brief calcula los precios de venta de los pasajes con los distintos medios de pago
 *
 * \param int* pFlag
 * \param todoOk
 * \param int flagIngresoKm
 * \param int* pFlag
 * \param float precioAerolineas
 * \param float precioLatam
 * \return todoOk
 *
 */
void calcularCostos(int flagIngresoPrecio, int flagIngresoKm);

/** \brief informa los km del vuelo, los precios con ambas aerolineas y las formas de pago y el precio por kms
 *
 * \param int* pFlagIngresoKm
 * \param int* pFlagIngresoPrecio
 * \param int* pFlagCalculoCostos
 * \return todoOk
 *
 */
void informarResultados(int* pFlagIngresoKm, int* pFlagIngresoPrecio, int* pFlagCalculoCostos);

/** \brief consulta al usuario si desea salir del programa
 *
 * \param char* x
 * \return
 *
 */
void confirmar(char* x);

/** \brief informa que el dato ingresado no es un número
 *
 * \param
 * \return
 *
 */
void informarNoEsNumero();

/** \brief se cargan los datos por hardcodeo
 *
 * \param
 * \return
 *
 */
int cargarDatos();

#endif /* TP_1_H_INCLUDED */
