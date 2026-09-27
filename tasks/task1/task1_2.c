#include <stdio.h>

int main(int argc, char *argv[]){
    int N = argc - 1;
    for (int i = 1;i<=N;i++){
        if (i % 2 == 0){
	     for (int j = 0; j < i / 2; j++){
	          printf("\t");
	     }  
	     printf("%d) %s\n", i, argv[i]);
	     
	} else{
	    printf("%d) %s\n", i, argv[i]);
	}
   
    }
}
