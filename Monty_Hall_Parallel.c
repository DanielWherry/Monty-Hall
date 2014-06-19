#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mpi.h>
#include <stdbool.h>
#include <time.h>

int main(){

	const int NUMSTEPS = 10000;
	srand(time(NULL));	

 	double winAverage;
	int wins = 0, userChoice, isACar, door1, door2;
	bool isGoat = true, isCar = true, switchIt = true, noSwitchIt = true, gotItRight;
	for(int i = 0;i < NUMSTEPS; i++){

		userChoice = rand() % 3;
		isACar = rand() % 3;

		if(isACar == userChoice){
			door1 = isGoat;
			door2 = isGoat;
		} else if(isACar != userChoice){	
			door1 = isGoat;
			door2 = isCar; 
		}
		
		gotItRight = rand() % 2;
		if( ((isACar == userChoice) && noSwitchIt) || ((isACar != userChoice) && (gotItRight == true))) {
			wins++;
		}
	
	}	
	winAverage = (double)wins / NUMSTEPS;

	printf("There were %d wins out of %d games.\n", wins, NUMSTEPS);
	printf("That's a win average of %f.\nLooks like Monty Hall is at it again with this devilish tomfoolery!!\n", winAverage);


	return 0;
}

