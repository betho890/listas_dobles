#include <stdio.h>
#include "nodo.h"
#include "operaciones.h"
#include <stdlib.h>


int main (){
	struct nodo *cabecera;
	int valor;
	cabecera = (struct nodo*) malloc(sizeof(struct nodo));
	inicializar(cabecera);
	printf(" pulsa -1 para dejar de ingresar datos, imprimir matriz y salir \n");
	while(1){
		printf("ingresa un numero ");
		scanf("%d",&valor);
		if(valor==-1)
			break;
		insertar_al_final(cabecera, valor);
	}
	imprimir_lista(cabecera);
	borrar_lista(cabecera);
	return 0;
}
