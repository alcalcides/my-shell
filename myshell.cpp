#include <iostream>
#include "./lib/treatArgs.cpp"

using namespace std;

int main(int argc, char** argv) {
    treatArgs(argc);

    cout << "Hello World!" << endl;
    
    return 0;
}