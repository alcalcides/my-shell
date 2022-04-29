#include "./treatArgs.hpp"

#include <iostream>

using namespace std;

void treatArgs(int argc) {
    if(argc > 1) {
        cout << "[ERROR] Params are forbidden" << endl;
        exit(EXIT_FAILURE);
    }
}