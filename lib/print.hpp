#ifndef __PRINT__
#define __PRINT__

#include <string>
#include <iostream>
#include <errno.h>
#include <string.h>

using namespace std;

void printMyshell();
void printError(string msg);
void printErrorOverArgs(int max);
void printMyshellMsg(string msg);
void printProcessStarted(pid_t pid);
void printSystemError();
void printProcessExited(pid_t pid);
void printProcessKilled(pid_t pid);
void printProcessStopped(pid_t pid);
void printProcessContinued(pid_t pid);

#endif