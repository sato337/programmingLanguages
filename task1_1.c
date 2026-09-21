#include <stdio.h>

int main(int argc, char *argv[]){
	int N = (argc - 1);
	int sum = 0;
	if (N < 3){
	    for (int i = 1; i <= N; i++){
	  	printf("%s\n", argv[i]);
	   }
        } else if (N >= 3 && N < 6){
              for (int i = 1; i <= N*3; i++){
	          sum += i;
		 	      }
	      printf("%d", sum);
	} else if (N >= 6) {
	    printf("Too much :(\n");
	}
	return 0;
}
