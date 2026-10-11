#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

double lengthCalculator(struct Point p1, struct Point p2){
	return sqrt((pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
}

double triangleSquare(struct Point p1, struct Point p2, struct Point p3){
	return (0.5 * fabs((p1.x * (p2.y - p3.y) +
		 p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y))));

}

int main(void) {
	int userChoice[2];
	struct Point pn[4];
	int combinations[3][3] = {{3, 0, 1}, {3, 1, 2}, {3, 2, 0}}; 
	double sumOfSquares = 0;
	for (int i = 0; i < 4; i++){
		printf("Coordinates of point %d: ", i + 1);
		scanf("%d %d", &pn[i].x, &pn[i].y);
}
	printf("We use points to calculate the length: ");
	scanf("%d %d", &userChoice[0],  &userChoice[1]);
	printf("The distance between points %d and %d is %.3f\n",
		userChoice[0], 
		userChoice[1],
		lengthCalculator(pn[userChoice[0]-1], pn[userChoice[1] - 1]));


 	double triangleSquare0 = triangleSquare(pn[0], pn[1], pn[2]); 
	if (triangleSquare0 == 0){
		printf("3 points lie on the same line\n");
		return 0;
	}else {
		printf("Triangle square is %.3f\n", triangleSquare0);
		}
	for (int i = 0; i < 3; i ++){
		sumOfSquares += triangleSquare(pn[combinations[i][0]],
			pn[combinations[i][1]], pn[combinations[i][2]]); 
	}
	if (sumOfSquares == triangleSquare0){
		printf("Point 4 lies inside the triangle formed by points 1–3");
	} else{
		printf("Point 4 doesn't lie inside the triangle formed by points 1–3");
	}

	return 0;
}
