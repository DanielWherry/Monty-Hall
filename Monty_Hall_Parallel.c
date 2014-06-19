#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mpi.h>
#include <stdbool.h>
#include <time.h>

int main(){

	const int NUMSTEPS = 10000;

 	double goatAverage, carAverage;
	int car = 0;
	int goat = 0;
	int userChoice, probOfCar;
	for(int i = 0;i < NUMSTEPS; i++){

		//bool thereIsACar;
		
		srand(time(NULL));	
	
		userChoice = rand() % 3;
		
		srand(time(NULL));
		probOfCar = rand() % 3;
		
		if(probOfCar == userChoice){
			car++;
		} //else if(probOfCar != userChoice){
		printf("hey");	
		//printf("hey");	
		//	goat++;
		//}
	}	
	goatAverage = goat / NUMSTEPS;
	carAverage = car / NUMSTEPS;

	printf("Goat Average = %f\n", goatAverage);
	printf("Car Average = %f\n", carAverage);
	

	return 0;
}

