#include<stdio.h>


int main (void){
	int v,d,t,n,num[2];
	char letra[2];
	printf("ingres la cantidad de casos que desea ingresaR: ");
	scanf("%d",&n);
	printf("ingrese los datos que tenga: ");
	for(int i=0;i<n;i++){
		printf("ingrese los datos que tenga: ");
		do{
                   scanf(" %c%d %c%d", &letra[0],&num[0],&letra[1],&num[1]);
        }while(!(((letra[0]=='t')||(letra[0]=='d')||(letra[0]=='v'))&&((letra[1]=='t')||(letra[1]=='d')||(letra[1]=='v'))&&(num[0]>0&&num[0]<10000)&&(num[1]>0&&num[1]<10000)))
;
		if((letra[0]=='d'||letra[0]=='t')&&(letra[1]=='d'||letra[1]=='t')){
			v= num[0]*num[1];
		        printf("%d",v);
		}
		if((letra[0]=='d'||letra[0]=='v')&&(letra[1]=='d'||letra[1]=='v')){
			t= num[0]*num[1];
		        printf("%d",t);
		}
		if((letra[0]=='v'||letra[0]=='t')&&(letra[1]=='v'||letra[1]=='t')){
			d= num[0]*num[1];
		        printf("%d",d);
		}
	}
	return 0;
}	

