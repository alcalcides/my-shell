#include "./initMyshell.hpp"

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGH_STRING 10

using namespace std;

void initMyshell() {
    string input;

    cout << "myshell> ";

    getline(cin, input);

    cout << "myshell: user's command: " << input << endl;
}
