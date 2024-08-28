#include <stdio.h>

int main (void){

	
	int x, y;
	
	printf("digite um numero inteiro:");
	scanf("%d", &x);
	printf("digite outro numero inteiro:");
	scanf("%d", &y);
	
	if(x < y) {
	   printf("%d é maior", y);
	}else if (y < x) {
	   printf("%d é maior",x);}
	return 0;   	   
}
