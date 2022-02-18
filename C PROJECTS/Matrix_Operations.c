#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int i,j,k,a,b,c,d,toplam=0;
printf("1. Matrisin satir sayisi:");
scanf("%d",&a);
printf("1. Matrisin sutun sayisi:");
scanf("%d",&b);
printf("2. Matrisin satir sayisi:");
scanf("%d",&c);
printf("2. Matrisin sutun sayisi:");
scanf("%d",&d);
int matrix1[a][b];
int matrix2[c][d];
int matrix3[a][d];

for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("1. Matrisin [%d][%d]. elemanini girin:",i,j);
		scanf("%d",&matrix1[i][j]);	
	}	
}

printf("\n");
printf("Birinci matris:\n");

for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",matrix1[i][j]);	
	}
	printf("\n");
}
printf("\n");

for (i=0;i<c;i++){
	for (j=0;j<d;j++){
		printf("2. Matrisin [%d][%d]. elemanini girin:",i,j);
		scanf("%d",&matrix2[i][j]);
	}	
}

printf("\n");
printf("Ikinci matris:\n");

for (i=0;i<c;i++){
	for (j=0;j<d;j++){
		printf("%d ",matrix2[i][j]);	
	}
	printf("\n");
}

printf("\n");
printf("Matrislerin toplami:\n");

if (a!=c || b!=d){
	printf("Bu matrisler toplanamaz! (Matrislerin satir ve sutun sayisi esit olmali).\n\n");
}
else {
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",matrix1[i][j]+matrix2[i][j]);	
	}
	printf("\n");
}
printf("\n");
}

printf("Matrislerin farki:\n");

if (a!=c || b!=d){
	printf("Bu matrisler cikarilamaz! (Matrislerin satir ve sutun sayisi esit olmali).\n\n");
}
else{
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",matrix1[i][j]-matrix2[i][j]);	
	}
	printf("\n");
}	
printf("\n");
}

printf("Matrislerin carpimi:\n");

if (b!=c){
	printf("Bu matrisler carpilamaz! (1. matrisin sutun sayisi 2. matrisin satir sayisina esit olmali).");	
}
else{
	for (i=0;i<a;i++){
		for (j=0;j<d;j++){
			for (k=0;k<b;k++){
				toplam += matrix1[i][k]*matrix2[k][j];
			}
			matrix3[i][j] = toplam;
			toplam=0;
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}
}

	return 0;
}
