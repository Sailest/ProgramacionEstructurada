/*
	Autor: Carlos Chan
	Entradas: El numero del producto y la cantidad vendida.
	Salidas: El total de los productos vendidos al dia.
	Procedimiento general: Se lee dos numeros que representan un producto y la cantidad vendida del mismo, 
	posterior con un switch se calcula el precio a pagar y se va acumulando, el programa termina cuando
	el numero de producto este fuera de rango o cuando la cantidad vendida sea negativa.
*/
#include <stdio.h>
#define N 5

void entrada(int*, int*);
void proceso(float[], int, int, float*);
void salida(float);

int main(){
	float productos[N] = {2.98, 4.5, 9.98, 4.49, 6.87};
	int cantidad = 0, producto = 1;
	float totalVendido = 0;
	
	while(cantidad >= 0 && producto >= 1 && producto <=5){
		entrada(&cantidad, &producto);
		proceso(productos, cantidad, producto, &totalVendido);
		salida(totalVendido);
	}
	
	return 0;
}

void entrada(int* cantidad, int* producto){
	printf("\nIngresa el numero de producto: ");
	scanf("%d", producto);
	printf("Ingresa la cantidad vendida: ");
	scanf("%d", cantidad);		
}

void proceso(float productos[], int cantidad, int producto, float* vendido){
	if(cantidad >= 0){
		switch(producto){
		case 1: *vendido = *vendido + productos[0] * cantidad;
		break;
		case 2: *vendido = *vendido + productos[1] * cantidad;
		break;
		case 3: *vendido = *vendido + productos[2] * cantidad;
		break;
		case 4: *vendido = *vendido + productos[3] * cantidad;
		break;
		case 5: *vendido = *vendido + productos[4] * cantidad;
		break;
		default:
		printf("\nSaliste");
		}	
	}
	else{
		printf("\nSaliste");
	}
}

void salida(float vendido){
	printf("\nTotal vendido: %f\n", vendido);
}