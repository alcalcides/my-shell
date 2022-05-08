#ifndef __EXECUTE__
#define __EXECUTE__

void execute(char **word);

/**
 * @brief Should or not repeat the loop of Myshell.
 *
 * @param cmd is the command passed to Myshell, always the first one.
 * @return true if cmd is `quit` or `exit` and false otherwise.
 */
bool shouldRepeat(char *cmd);

#endif