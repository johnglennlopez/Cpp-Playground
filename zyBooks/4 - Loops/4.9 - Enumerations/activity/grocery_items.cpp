#include <iostream>
using namespace std;

/*
	Print either "Fruit", "Drink", or "Unknown" (followed by a newline) depending on the value of userItem. Print "Unknown" (followed by a newline) if the value of userItem does not match any of the defined options. For example, if userItem is GR_APPLES, output should be:
	Fruit
*/

int main() {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};

   GroceryItem userItem = GR_APPLES;

   /* Your solution goes here  */

	switch (userItem) {
		case 0:
		cout << "Fruit";
		break;

		case 1:
		cout << "Fruit";
		break;

		case 2:
		cout << "Drink";
		break;

		case 3:
		cout << "Drink";
		break;

		default:
		cout << "Unknown";
	}



	cout << endl;
   return 0;
}
