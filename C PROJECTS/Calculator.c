#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


printf("Islemler:\n1.Toplama(+)\n2.Cikarma(-)\n3.Carpma(*)\n4.Bolme(/)\n");

do{

float sayi1,sayi2,sonuc;
char islem;
int devam;

    printf("Bir islem secin:");
    scanf("%c",&islem);
    printf("Sayilari girin:");
    scanf("%f %f",&sayi1,&sayi2);

if (sayi2==0 & islem=='/'){
	printf("Tanimsiz!(Bolme isleminde bolen 0 olamaz)\n");
}

switch(islem){
	
	case '+':
		sonuc = sayi1 + sayi2;
		break;
	
	case '-':
		sonuc = sayi1 - sayi2;
		break;
	
	case '*':
		sonuc = sayi1 * sayi2;
		break;
	
	case '/':
		sonuc = sayi1 / sayi2;
		break;
		
	default :
		printf("Gecersiz operator!");
		break;
		
}
printf("Sonuc:%.2f\n\n",sonuc);
printf("Baska islem yapmak istiyor musunuz? (Evet-1 , Hayir-2)");
scanf("%d",&devam);

}while(devam==1);


	return 0;
}
