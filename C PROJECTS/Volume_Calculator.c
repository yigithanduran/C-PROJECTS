#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n,a,b,c;
float pi=3.14;
printf("Hacim Hesaplayiciya Hosgeldiniz!\n\n");
printf("1.Kup\n2.Dikdortgenler Prizmasi\n3.Silindir\n4.Koni\n5.Kare Piramit\n6.Kure\n\n");
printf("Hacmini bulmak istediginiz sekli secin:");
scanf("%d",&n);

switch (n){
	
	case 1:
		printf("Herhangi bir kenari yazin:");
		scanf("%d",&a);
		printf("Hacim:%d",a*a*a);
		break;
	case 2:
		printf("Taban kenarlarindan 1. sini yazin:");
		scanf("%d",&a);
		printf("Taban kenarlarindan 2. sini yazin:");
		scanf("%d",&b);
		printf("Yuksekligi yazin:");
		scanf("%d",&c);
		printf("Hacim:%d",a*b*c);
		break;
	case 3:
		printf("Taban yaricapini yazin:");
		scanf("%d",&a);
		printf("Yuksekligi yazin:");
		scanf("%d",&b);
		printf("Hacim:%.3f",pi*a*a*b);
		break;
	case 4:
		printf("Taban yaricapini yazin:");
		scanf("%d",&a);
		printf("Yuksekligi yazin:");
		scanf("%d",&b);
		printf("Hacim:%.3f",(0.33)*pi*a*a*b);
		break;
	case 5:
		printf("Taban kenarlarindan birini yazin:");
		scanf("%d",&a);
		printf("Yuksekligi yazin:");
		scanf("%d",&b);
		printf("Hacim:%.3f",(0.33)*a*a*b);
		break;
	case 6:
		printf("Yaricapi yazin:");
		scanf("%d",&a);
		printf("Hacim:%.3f",(1.33)*pi*a*a*a);
		break;
		
}

	return 0;
}
