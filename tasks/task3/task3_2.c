#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n = atoi(*(argv + 1));
	int m = atoi(*(argv + 2));
	int *a = malloc((n + 1) * sizeof(int));
	int *b = malloc((m + 1) * sizeof(int));
	int *c = malloc((n + m + 1) * sizeof(int));

	for (int i = 0; i <= n; i++){
		scanf("%d", a + i);
	}

	for (int i = 0; i <= m; i++){
		scanf("%d", b + i);
	}

	for (int i = 0; i <= n + m; i++){
		*(c + i) = 0;
	}
	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= m; j++){
			*(c + i + j) += *(a + i) * *(b + j);
		}
	}
	printf("Coefficients:");
	for (int i = 0; i <=n + m; i++){
		printf(" %d", *(c + i));
	}
	printf("\n");

	free(a);
	free(b);
	free(c);
	return 0;
}

