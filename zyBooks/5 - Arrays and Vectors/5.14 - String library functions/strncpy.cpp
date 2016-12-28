#include <iostream>
#include <cstring>
using namespace std;

/*
	strncpy(destStr, sourceStr, numChars)
	Copies up to numChars characters.
*/

int main(){

	char originalString[] = "This is a string for testing.";
	char newString[sizeof(originalString) -1] = "new str"; //set newString to size of originalString

	cout << "originalString: " << originalString << endl;
	cout << "newString: " << newString << endl;

	strncpy(newString, originalString, 16);
	cout << "...after copy..." << endl;
	cout << "newString: " << newString << endl;

	cout << endl;
	return 0;
}
