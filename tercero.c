#include <stdlib.h>
#include <stdio.h>
#include "nodo.h"
#include "operaciones.h"

int main(){
	struct nodo *cabecera;
	int valor,despues;
	cabecera = (struct nodo*) malloc(sizeof(struct nodo));

	printf("agrega los datos que quieras ingresar, ingresa -1 al final\n");
	while(1){
		printf("ingrese dato: ");
		scanf("%d",&valor);
		if(valor == -1)
			break;
		insertar_al_final(cabecera,valor);
	}
	imprimir_lista(cabecera);
	printf("despues de que numero deseas agregar el nuevo dato");
	scanf("%d",&despues);
	printf("dime que dato quieres agregar despues de %d,");
	scanf("%d",&valor);
	insertar_despues_de(cabecera,valor,despues);
	imprimir_lista(cabecera);
	borrar_lista(cabecera);
	return 0;
	
}
