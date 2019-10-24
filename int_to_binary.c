#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int intToBinary();

int intToBinary(){
	int number;
	int remainder;
	int binary[8];
	int counter = 0;
	do{
		printf("Please enter an integer\n");
		scanf("%d", &number);
	}while(number > 256);
	remainder = number;
	for (int i = 128; i>0 ; i=i/2){
		if (remainder >= i){
			printf("1");
			binary[counter] = 1;
			remainder = remainder % i;
		}
		else{
			printf("0");
			binary[counter] = 0;
		}
		counter ++;
	}
	return 0;
}

int main(){
	intToBinary();
	return 0;
}