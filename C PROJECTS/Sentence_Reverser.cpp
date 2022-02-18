#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

int i,j;
char cumle[200],gecici;

printf("Cumlenizi girin: ");
gets(cumle);

int uzunluk = strlen(cumle);

for(i=0,j=uzunluk-1;i<uzunluk/2;i++,j--){
	
	gecici=cumle[i];
	cumle[i]=cumle[j];
	cumle[j]=gecici;
	
}

printf("\n");
puts(cumle);

return 0;

}
