#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int n = atoi(*(argv + 1));
	int m = abs(atoi(*(argv + 2)));
	int t = atoi(*(argv + 3));
	int *arr = malloc(n * sizeof(int));
	srand(time(NULL));

	for (int i = 0; i < n; i++){
		*(arr + i) = rand() % m;
	}
	for (int i = 0; i < n; i++){
		printf("Array elements: %d\n", *(arr + i));
	}
	for (int i = 0; i < n; i++){
		if (*(arr + i) < t){
			printf("The indices of these elements are smaller than t: %d\n", i);
		}
	}

	free(arr);
	return 0;
}
