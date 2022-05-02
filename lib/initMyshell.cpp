#include "./initMyshell.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGH_STRING 10

using namespace std;

void initMyshell() {
	string inputFull, cmdMyshell, cmdSystem;

	cout << "myshell> ";

	// get user order
	getline(cin, inputFull);

	// obtain Myshell command
	stringstream ss(inputFull);
	ss >> cmdMyshell;

	// verifications of Myshell comand
	// ...

	// obtain command to be addressed to system Linux
	cmdSystem = inputFull.substr(cmdMyshell.size() + 1, inputFull.size());

	// verifications of system command
	// ...

	// feedback to user
	cout << "myshell: user's command: " << inputFull << endl;

	// execution
	// ...

}
