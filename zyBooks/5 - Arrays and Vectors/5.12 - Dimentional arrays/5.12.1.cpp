#include <iostream>
using namespace std;

/*
	Find the maximum value and minimum value in milesTracker. Assign the maximum value to maxMiles, and the minimum value to minMiles. Sample output for the given program:
		Min miles: -10
		Max miles: 40
*/

int main( ) {

   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i = 0;
   int j = 0;
   int maxMiles = -99; // Assign with first element in milesTracker before loop
   int minMiles = -99; // Assign with first element in milesTracker before loop

   milesTracker[0][0] = -10;
   milesTracker[0][1] = 20;
   milesTracker[1][0] = 30;
   milesTracker[1][1] = 40;

   /* Your solution goes here  */
	maxMiles = milesTracker[0][0];
	minMiles = milesTracker[0][0];

	for(i = 0; i <= NUM_ROWS - 1; i++){
		for(j = 0; j <= NUM_COLS - 1; j++){
			if(milesTracker[i][j] < minMiles){
				minMiles = milesTracker[i][j];
			}
			if(milesTracker[i][j] > maxMiles){
				maxMiles = milesTracker[i][j];
			}
		}
	}

    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;
}
