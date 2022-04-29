#include <iostream>
#include "./lib/treatArgs.hpp"
#include "./lib/initMyshell.hpp"


using namespace std;

int main(int argc, char** argv) {
    treatArgs(argc);

    initMyshell();
    
    return 0;
}