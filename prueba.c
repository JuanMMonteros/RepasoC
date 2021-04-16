#include <stdio.h>

void carga(int n,char letras[],int num[],char igual[]){	
	for(int i=0;i<2*n;i+2){
		scanf(" %c%c%d",&letras[i],&igual[i],&num[i]);
		scanf(" %c%c%d",&letras[i+1],&igual[i+1],&num[i+1]);
	}
}

void validacion(int n,char letra[],int num[],char igual[]){
	for(int i=0;i<2*n;i+2){
	if(!(letra[i]=='D'&&letra[i]=='T'&&letra[i]=='V'))
				letra[i]=NULL;
	        if(!((letra[i+1]=='D'&&letra[i+1]=='T'&&letra[i+1]=='V')||(letra[i]==letra[i+1])))
				letra[i]=NULL;
	        if(!(num[i]>0)&&(num[i]<10000))
		                num[i]=NULL;
	        if(!(num[i+1]>0)&&(num[i+1]<10000))
		                num[i+1]=NULL;
	        if(!(igual[i]=='='))
		                igual[i]=NULL;
	        if(!(igual[i+1]=='='))
		                igual[i+1]=NULL;
				}
}
int distinto(char letras,int num,char igual,char letras1,int num1,char igual1){
         int val=0;
	 if((letras!=NULL)&&(letras1!=NULL)&&(num!=NULL)&&(num1!=NULL)&&(igual!=NULL)&&(igual1!=NULL))
	                        val=1;
	return val;
}

char letra(char var,char var1){
	char val;
	if((var=='D'&&var1=='T')||(var1=='D'&&var=='T'))
                        val='V';
	if((var=='V'&&var1=='T')||(var1=='V'&&var=='T'))
                        val='D';
	if((var=='D'&&var1=='V')||(var1=='D'&&var=='V'))
                        val='T';
}

void calculo(int n,char letras[],int num[],char igual[]){
        int result, imp;
       	for(int i=0;i<n*2;i+2){
		   imp=distinto(letras[i],num[i],igual[i],letras[i+1],num[i+1],igual[i+1]);
		   if(imp==1)
			   printf("%c=%d\n",letra(letras[i],letras[i+1]),num[i]*num[i+1]);
	}
}


int main (void){
	int n;
	scanf(" %d",&n);
	char letras[n*2],igual[n*2];
	int num[n*2];
	carga(n,letras,num,igual);
	validacion(n,letras,num,igual);
	calculo(n,letras,num,igual);
	
        return 0; 
}

               
	











