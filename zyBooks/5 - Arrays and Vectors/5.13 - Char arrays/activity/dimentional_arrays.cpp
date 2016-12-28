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
		/*
			NOTE: max and min Miles cannot be initiated to zero. If you do that
			the results will be bugged if every entered value are negative or
			positive
		*/

	for (i = 0; i < NUM_ROWS; i++){
		for (j = 0; j < NUM_COLS; j++){
			if (maxMiles < milesTracker[i][j]){
				maxMiles = milesTracker[i][j];
			}
			if (minMiles > milesTracker[i][j]){
				minMiles = milesTracker[i][j];
			}
		}
	}

    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;
}
