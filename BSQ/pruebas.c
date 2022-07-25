//#include "header.h"
#include <stdlib.h> 
#include <stdio.h>

int	main(void)
{
	int	filas = 2;
	int	columnas = 3;	
	int	**x;	

	int i;
	int j;
	x = (int **)malloc(filas*sizeof(int*));
	for (i=0;i<filas;i++) 
		x[i] = (int*)malloc(columnas*sizeof(int)); 

	// Damos Valores a la Matriz 
	x[0][0] = 1; 
	x[0][1] = 2; 
	x[0][2] = 3; 

	x[1][0] = 4; 
	x[1][1] = 5; 
	x[1][2] = 6; 

	// Dibujamos la Matriz en pantalla 
	for (i=0; i<filas; i++) 
	{ 
		printf("\n"); 
		for (j=0; j<columnas; j++) 
			printf("\t%d", x[i][j] ); 
	} 
	
	return 0; 
} 