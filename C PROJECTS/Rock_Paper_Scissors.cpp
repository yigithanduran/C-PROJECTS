#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int bilgisayar,kullanici,i,devammi;
printf("Tas Kagit Makas Oyununa Hosgeldiniz!\n");
printf("Oyun 5 Eldir!\n");
printf("Tas:1 Kagit:2 Makas:3\n\n");

do{
	int kullanicipuan=0,bilgisayarpuan=0;

for(i=0;i<5;i++){

	printf("\nSira Sende! Secimini yap:");
	scanf("%d",&kullanici);
	printf("Sira Bilgisayarda!\n");
	srand(time(NULL));
	bilgisayar=1+rand()%3;
	printf("Bilgisayarin secimi:%d\n",bilgisayar);
	
	if(kullanici==1){
		if(bilgisayar==1){
			printf("Beraberlik! Iki taraf da sayi alamadi.\n");
	
		}
		else if(bilgisayar==2){
			printf("Bilgisayar kazandi!\n");
			bilgisayarpuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
		else if(bilgisayar==3){
			printf("Kullanici kazandi!\n");
			kullanicipuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
	}
	else if(kullanici==2){
		if(bilgisayar==2){
			printf("Beraberlik! Iki taraf da sayi alamadi.\n");
	
		}
		else if(bilgisayar==3){
			printf("Bilgisayar kazandi!\n");
			bilgisayarpuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
		else if(bilgisayar==1){
			printf("Kullanici kazandi!\n");
			kullanicipuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
	}
	else if(kullanici==3){
		if(bilgisayar==3){
			printf("Beraberlik! Iki taraf da sayi alamadi.\n");
	
		}
		else if(bilgisayar==1){
			printf("Bilgisayar kazandi!\n");
			bilgisayarpuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
		else if(bilgisayar==2){
			printf("Kullanici kazandi!\n");
			kullanicipuan++;
			printf("Kullanici:%d\tBilgisayar:%d\n",kullanicipuan,bilgisayarpuan);
		}
	}	
printf("\n");

}

if(kullanicipuan>bilgisayarpuan){
	printf("Kazandin Tebrikler!\n");
	printf("Skor:\tKullanici:%d Bilgisayar:%d\n\n",kullanicipuan,bilgisayarpuan);
}
else if(kullanicipuan==bilgisayarpuan){
	printf("Berabere Bitti!\n");
	printf("Skor:\tKullanici:%d Bilgisayar:%d\n\n",kullanicipuan,bilgisayarpuan);
}
else if(kullanicipuan<bilgisayarpuan){
	printf("Bilgisayar Kazandi!\n");
	printf("Skor:\tKullanici:%d Bilgisayar:%d\n\n",kullanicipuan,bilgisayarpuan);
}

printf("Tekrar oynamak istiyor musunuz? (Evet-1,Hayir-2)\n");
scanf("%d",&devammi);

}while(devammi==1);

printf("Gorusmek uzere...");
	
	return 0;
}
