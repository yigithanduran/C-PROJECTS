#include <stdio.h>
#include <stdlib.h>

int Alan_Hesapla(int taban,int yukseklik){
	int alan;
	alan = taban*yukseklik;
	return alan;
}

int main(int argc, char *argv[]) {
int a,b,c,n;
float pi=3.14;	
printf("Alan hesaplayiciya hosgeldiniz !\n\n");
printf("1.Kare\n2.Dikdortgen\n3.Ucgen\n4.Eskenar Ucgen\n5.Daire\n6.Paralel Kenar\n7.Eskenar Dortgen\n8.Yamuk\n\n");
printf("Alanini bulmak istediginiz sekli secin:");
scanf("%d",&n);

	switch (n){	
		case 1:
		case 2:
		case 6:
			printf("Taban kenarini yazin:");
			scanf("%d",&a);
			printf("Yuksekligi yazin:");
			scanf("%d",&b);
			printf("Alan:%d",Alan_Hesapla(a,b));
			break;
		case 3:
			printf("Taban kenarini yazin:");
			scanf("%d",&a);
			printf("Yuksekligi yazin:");
			scanf("%d",&b);
			printf("Alan:%.2f",(0.5)*a*b);
			break;
		case 4:
			printf("Herhangi bir kenari yazin:");
			scanf("%d",&a);
			printf("Alan:%.2f",(0.43)*a*a);	
			break;
		case 5:
			printf("Yaricapi yazin:");
			scanf("%d",&a);
			printf("Alan:%.2f",pi*a*a);
			break;
		case 7:
			printf("1. kosegeni yazin:");
			scanf("%d",&a);
			printf("2. kosegeni yazin:");
			scanf("%d",&b);
			printf("Alan:%.2f",a*b*(0.5));
			break;
		case 8:
			printf("Alt kenari yazin:");
			scanf("%d",&a);
			printf("Ust kenari yazin:");
			scanf("%d",&b);
			printf("Yuksekligi yazin:");
			scanf("%d",&c);
			printf("Alan:%.2f",(0.5)*(a+b)*c);
			break;		
	}
	
	return 0;
}
