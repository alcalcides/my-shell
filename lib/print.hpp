#ifndef __PRINT__
#define __PRINT__

#include <string>

using namespace std;

void printError(string msg);
void printErrorOverArgs(int max);
void printMyshell();
void printProcessStarted(pid_t pid);
void printSystemError();

#endif