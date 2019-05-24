/**
	\file main.c
	\brief primer programa de manejo de arrays asociados - Info I.
	\details 
	Ejercicio: Realizar un programa para la gestión de estudiantes, 
	en donde se debe ingresar el legajo del estudiante y su nota. 
	Un estudiante puede tener varias notas (no todos los estudiante tiene la
	misma cantidad de notas). Se desconoce la cantidad de estudiantes, pero
	se sabe que no superará los 100 estudiantes.
	El ingreso de datos finaliza con legajo cero (0). Se debe verificar que 
	los valores ingresados sean mayores a cero (0).
	
	Una vez finalizado el ingreso, se debe informar:

		mejor promedio - (nota y estudiantes) considerando estudiantes que 
		hayan dado más examenes de dos (2) examenes.
		
		Listar estudiantes que hayan dado dos (2) o menos examenes.
		
		Listar todos los estudiantes con sus promedios.

	\note En ningun momento se solicita el detalle de cada nota
		
	\version 1.0
*/

#include "rutinas.h"


/*!	\fn int main ()
	\brief Función principal
	\details invoca a la función de ingreso y diferentes funciones de listado.
	\return  0
*/
int main ()
{
//! declaración de los arrays asociados.	
int leg[MAX];	//!leg[]: legajos ingresados - solo una instancia de cada legajo, de manera de no desbordar el array
int sum[MAX];	//!sum[]: array asociado a leg - se acumulan las notas ingresadas.
char c_notas[MAX]; //!c_notas[]: array asociado a sum - cantidad de notas acumuladas en sum[i].

int c;	// en c se guarda la cantidad de datos ingresados.

	c=ing_datos(leg,sum,c_notas,MAX);	//! ingreso de datos
	
	//! Presentación de las informaciones solicitada
	imp_mejor_prom(leg,sum,c_notas,c);
	listar1(leg,c_notas,c);
	listar2(leg,sum,c_notas,c);

return 0;
}
