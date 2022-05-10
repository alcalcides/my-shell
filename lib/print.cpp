#include "./print.hpp"
#include <iostream>
#include <string>
#include <errno.h>
#include <string.h>

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

void printProcessExited(pid_t pid) {
    cout << "myshell: process id " << pid << " exited" << endl;
}

void printProcessKilled(pid_t pid) {
    cout << "myshell: process id " << pid << " killed" << endl;
}

void printProcessStopped(pid_t pid) {
    cout << "myshell: process id " << pid << " stopped" << endl;
}

void printProcessContinued(pid_t pid) {
    cout << "myshell: process id " << pid << " continued" << endl;
}

void printSystemError() {
    cout << errno << ": " << strerror(errno) << endl;
}