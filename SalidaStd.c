#include<stdio.h>
#include<math.h>

float IngresarDatos(void);

int main (void){
	FILE *fp,*err;
	float num;
	if((fp=fopen("raices.dat", "w"))==NULL)
                    fprintf(stdout,"EL archivo no pudo crearc\n");
	else
                    fprintf(stdout,"EL archivo  pudo crearce\n");
	if((err=fopen("Error.dat", "w"))==NULL)
                    fprintf(stdout,"EL archivo no pudo crearce\n");
	else
                    fprintf(stdout,"EL archivo  pudo crearce\n");


	do{
	   num = IngresarDatos();
	   if(num>0)
                    fprintf(fp,"%.2f\n",sqrt(num));
	   if(num<0)
                    fprintf(err,"Error no existen raices del numero negativo %f\n",num);

        }while(num!=0);
	fclose(fp);
	fclose(err);
	return 0;
}

float IngresarDatos(void){
	float num;
	printf("ingrese un numero: ");
	scanf("%f",&num);
	return num;
        
}

