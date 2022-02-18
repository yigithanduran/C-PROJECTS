#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

int satir,sutun,i,j,x;

printf("Kare matrisin boyutlarini girin: ");
scanf("%d %d",&satir,&sutun);

float matris[satir][sutun],birim[satir][sutun];
printf("\n");

for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
		
		printf("Matrisin (%d,%d). elemani: ",i+1,j+1);
		scanf("%f",&matris[i][j]);
		
	}
}

printf("\nMatris:\n");

for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
		
		printf("%.2f ",matris[i][j]);
		
	}
	printf("\n");
}

for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
		
		if(i==j){
			birim[i][j] = 1;
		}
		
		else{
			birim[i][j] = 0;
		}
		
	}
}

float d,k;

for(i=0;i<satir;i++){
	d = matris[i][i];
	for(j=0;j<sutun;j++){
		
		matris[i][j] = matris[i][j]/d;
		birim[i][j] = birim[i][j]/d;
		
	}
	for(x=0;x<satir;x++){	
		if(x != i){
			
			k = matris[x][i];
			for(j=0;j<sutun;j++){
				
				matris[x][j] = matris[x][j] - (matris[i][j]*k);
				birim[x][j] = birim[x][j] -(birim[i][j]*k);
			}
		}
	}
}

printf("\nMatrisin Tersi:\n");

for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
		
		printf("%f ",birim[i][j]);
		
	}
	printf("\n");
}

	return 0;
}
