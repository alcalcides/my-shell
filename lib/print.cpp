#include "./print.hpp"
#include <iostream>
#include <string>

using namespace std;

void printError(string msg)
{
    cout << "[ERROR] " << msg << endl;
}

void printErrorOverArgs(int max)
{
    cout << "[ERROR] Forbidden to enter, more than " << max << " arguments" << endl;
}

void printMyshell()
{
    cout << "myshell> ";
}

void printProcessStarted(pid_t pid) {
    cout << "myshell: process id " << pid << " started" << endl;
}