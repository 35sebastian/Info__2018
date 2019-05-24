/**
	\file rutinas.c
	\version 1.0
*/

#include <stdio.h>

/*!
	\def MAX
	\brief Cantidad máxima admisible de estudiantes
*/
#define MAX 100

/*!
	\def MIN_EXAM_TO_PROM
	\brief Cantidad minima de examenes para ser considerado dentro de
	los mejores promedios
*/
#define MIN_EXAM_TO_PROM 3


/*!
	\def MIN_EXAM_TO_LIST
	\brief define el concepto de pocos examenes
	\details Si no se supera esta cantidad de examenes, se aparece en la
	lista de estudiantes con pocos examenes.
*/
#define MIN_EXAM_TO_LIST 2



int ing_datos (int [],int [],char [],int);
void listar1 (int *,char *,int );
void listar2 (int *,int *,char *,int);
void imp_mejor_prom(int *,int *,char *, int);

