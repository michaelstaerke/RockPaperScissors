#include <stdio.h>      //Standard IO
#include <stdlib.h>     

int main()
{
    int pc_score = 0;
    int pl_score = 0;

    // normal mode
    const int rock = 1;
    const int paper = 2;
    const int scissors = 3;

    // advanced mode
    const int fountain = 4;
    const int match = 5;


/* Start Questions */

    printf("Welcome to RockPaperScissors!");

    printf("Choose normal mode 'nm' or advanced mode 'am' (type in the command line 'nm' or 'am'):");
        /* game mode scan */
        if (scanf("%d%d", &nm, &am) )
        const char *mode[] = {"nm", "am"};
        {
            fprintf(stderr, "Eingabefehler !\n");
        } 

    printf("Now choose if you want to have a best of one / three / five / seven or nine (type in the command line '1' / '3' / .. ):");
        /* best of scan */


/* Game Start */



    // scoreboard

    return 0;
}