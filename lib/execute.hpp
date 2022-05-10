#ifndef __EXECUTE__
#define __EXECUTE__

#include <unistd.h>

/**
 * @brief Executes every input typed after 'myshell> ' printing
 *
 * @param word is the params array, i. e., it's exactly like the typical argv[]
 */
void execute(char **word);

/**
 * @brief Should or not repeat the loop of Myshell.
 *
 * @param cmd is the command passed to Myshell, always the first one.
 * @return true if cmd is `quit` or `exit` and false otherwise.
 */
bool shouldRepeat(char *cmd);

/**
 * @brief Routine for the parent process
 *
 * @param pid is the child process id.
 */
void playParent(pid_t child_pid);

/**
 * @brief Routine for the child process
 *
 * @param word is the typical args[] params, i. e., it stores the params
 */
void playChild(char **word);

#endif