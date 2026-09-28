#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
        int num = atoi(argv[1]);
        int zeroesCounter = 0;
        int onesCounter = 0;
        if ((num < 0) || (num == 0)){
                printf("-2\n");
                return 0;
        } else if ((num & 1)== 1){
                printf("-1\n");
                return 0;
        }
        int div =  num;
        while (div!=1){
                if (div % 2 == 0){
                        zeroesCounter++;
                } else{
                        onesCounter++;
                        }
                if (div == 1){
                        onesCounter++;

                }
                div /= 2;
        }
        if (onesCounter == 0){
                printf("%d\n", zeroesCounter);
        } else{
                printf("Noninteger\n");
        }
}