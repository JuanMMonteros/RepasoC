#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float MedidaAridmetica(float *,int n);
float Varianza(float *,int n);
float DesviacionEstandar(float *,int n);
float Moda(float *,int n);
float Medida(float *,int n);
void Selector(int sel,float *,int n);
void Carga(float *,int n);
void Ordenamiento(float [], int n);

int main(void){
	int n, sel;
	printf("que cantidad de datos desea cargar: ");
	scanf(" %d", &n);
	float *datos=malloc(sizeof(float)*n);
	Carga(datos,n);
	printf("Ingrese la operacion que quiere realizar:\n 1.Para media arimetica\n 2.Varianza\n 3.Desviacion estandar\n 4.Moda \n 5.Medida\n ");
	scanf(" %d", &sel);
	Selector(sel,datos,n);
	free(datos);
	return 0;
}

void Carga(float *datos,int n){
	printf("Ingrese los datos que va a cargar: ");
	for(int i=0;i<n;i++){
		scanf("%f",(datos+i));
	}
}

void Selector(int sel,float *datos,int n){
	if(sel>3)
		Ordenamiento(datos,n);
	switch(sel){
		case 1:
			printf("La Media Arimetica es: %.2f", MedidaAridmetica(datos,n));
			break;
		case 2:
			printf("La Variaza es: %.2f", Varianza(datos,n));
			break;
		case 3:
	        	printf("La Desviacion estanda es: %.2f", DesviacionEstandar(datos,n));
			break;
		case 4:
	        	printf("La  Moda es: %.2f", Moda(datos,n));
			break;
		case 5:
	        	printf("La  Medida  es: %.2f", Medida(datos,n));
			break;
	}
	printf("\n");
}

float MedidaAridmetica(float *datos,int n){
	float suma=0;
	for(int i=0;i<n;i++){
		suma += *(datos+i);
	}
	return suma/n;
}

float Varianza(float *datos,int n){
	float x=MedidaAridmetica(datos,n);
	float suma=0;
	for(int i=0;i<n;i++){
		suma+= ((*(datos+i)-x)*(*(datos+i)-x));
	}
	return suma/n;
}
float DesviacionEstandar(float *datos,int n){
	return sqrt(Varianza(datos,n));
}
float Moda(float *datos,int n){
	return *(datos+(n/2));
}
float Medida(float *datos,int n){
	return 1;
}

void Ordenamiento(float datos[], int n){
	float tem;
	for(int i=0;i<n-i;i++){
		for(int i=0;i<n-1;i++){
			if(datos[i]>datos[i+1]){
				tem=datos[i];
				datos[i]=datos[i+1];
				datos[i+1]=tem;
			}
		}
	}
}


