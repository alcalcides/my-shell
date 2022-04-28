#include <iostream>

using namespace std;

void treatArgs(int argc) {
    if(argc > 1) {
        cout << "[ERROR] Params are forbiden" << endl;
        exit(EXIT_FAILURE);
    }
}