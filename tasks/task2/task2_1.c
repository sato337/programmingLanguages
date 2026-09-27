#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	int num = atoi(argv[1]);
	int onesCounter = 0;
	int zeroesCounter = 0;
	if (num < 0){
		num = abs(num);
		zeroesCounter++;
	}	
	int div =  num;
	while (div!=1){
		if (div % 2 == 0){
			zeroesCounter++;
		} else{
			onesCounter++;
			}
		div /= 2;
		if (div == 1){
			onesCounter++;
		}
	}       	
	int res = zeroesCounter - onesCounter + 1;
	printf("%d\n", res);
	return 0;
}

