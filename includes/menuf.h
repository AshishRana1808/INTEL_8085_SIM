#include <stdlib.h>

int cp(char *fname)
{
    system("cls");
    /*
    * DYNAMIC MEMORY ALLOCATON HERE
    A CLEAR SCREEN WILL APPEAR ON CMD_LINE STARTING WITH A NUMBER
    FOLLOWED BY A '|' CHARACTER SO THAT HOW MANY LINES ENTERED APPEARS ON SCREEN PLUS CONSTANT BLINKING OF CURSER FOR INPUT.
    * AN EMPTY LINE INPUT WILL BE INDICATOR OF PROGRAM TERMINATION
    * IF FILENAME WAS PROVIDED BY THE USER THAT WILL BE USED OR ELSE A RANDOM FILENAME WILL BE USED
    * FILENAME WILL BE SHOWN ON ABOVE THE SCREEN
    *
    */
    char str[40];
    int ln = 1;
    struct command
    {
        char *pcmd;
        char cmd;
        char *ncmd;
    };
    while (1)
    {
        printf("%2d|", ln);
        fgets(str, 40, stdin);
        ln++; // next line for later
        short strlen = 0;
        for (int i = 0;; i++)
        {
            if (str[i] == 10 || str[i] == ';')
            {
                strlen = i + 1;
            }
        }
    }
}
