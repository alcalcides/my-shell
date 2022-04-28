#include <iostream>
#include "./lib/treatArgs.hpp"


using namespace std;

int main(int argc, char** argv) {
    treatArgs(argc);

    cout << "Hello World!" << endl;
    
    return 0;
}