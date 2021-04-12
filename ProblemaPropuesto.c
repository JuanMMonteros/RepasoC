// Este programa imprima en pantalla el n´umero de caracteres y el n´umero de lıneas ingresados por teclado.
#include <stdio.h>
#define MAX 100

int Cadena(char *cad,int i){
	do{
        	scanf("%c",cad[i]);
		i++;
	}while(!(cad[i]==""));
        return i;
}

int Contador(char *cad){
	int i=0;
	
	do{
		char cadena[MAX];
		cadena[MAX] = *(cad+i);
		if(cad[i]!=0)
			i++;
	}while(!(cad[i]==0));
	return i;
}

int main (void){
	char *cadena={0};
	int Num_lineas;

	printf("ingrese las lineas de texto\n");
	Num_lineas=Cadena(cadena,Num_lineas);
	printf("el numero de lines del texto es: %d\n", Num_lineas);

	for(int i=0;i<Num_lineas-1;i++){
		printf("la linea numero %d tiene %d caracteres\n",i+1, Contador(cadena));
	}
	return 0;
}
