#include "./args.hpp"

#include <iostream>

using namespace std;

void treatArgs(int argc)
{
    if (argc > 1)
    {
        cout << "[ERROR] Params are forbidden" << endl;
        exit(EXIT_FAILURE);
    }
}

void seeArgs(char **word, int wordCounter)
{

    for (int i = 0; i < wordCounter; i++)
    {
        printf("%s\n", word[i]);
    }
}