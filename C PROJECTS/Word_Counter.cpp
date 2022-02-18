#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
char cumle[100];
int kelime=0,i=0;
printf("Lutfen bir cumle yaziniz:");
gets(cumle);

while (cumle[i]){
	
	if(cumle[i]==32){
		kelime++;
	}
	i++;	
}
printf("Girilen cumledeki kelime sayisi %d.",kelime+1);
	
	return 0;
}
