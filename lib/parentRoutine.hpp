#ifndef __PARENTROUTINE__
#define __PARENTROUTINE__

#include <unistd.h>
#include <sys/wait.h>

void playParent(pid_t child_pid);

#endif