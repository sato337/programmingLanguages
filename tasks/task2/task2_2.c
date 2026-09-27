#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
	if (((a & 1) == 1) && ((a & 1) == 1)){
		return gcd(a >> 1, b >> 1) >> 1;
	} else if (((a & 1) == 1) && ((a & 1) != 1)){
		return gcd(a >> 1, b);

	} else if (a > b){
		return gcd(abs(a - b), b);
	} else if (a < b){
		return gcd(abs(b - a), a);
	}      

}

int main(int argc, char *argv[]){
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	printf("НОД(%d, %d) = %d", num1, num2,  gcd(num1, num2));
	return 0;
			}
