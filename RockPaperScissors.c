#include <stdio.h>      //Standard IO
#include <stdlib.h>     

int main()
{
    int pc_score = 0;
    int pl_score = 0;
    int bestof;

    // normal mode
    const int rock = 1;
    const int paper = 2;
    const int scissors = 3;

    // advanced mode
    const int fountain = 4;
    const int match = 5;


/* Start Questions */

    printf("Welcome to RockPaperScissors! \n\n");

    printf("Choose normal mode '1' or 
            advanced mode '2' (type in the command line '1' or '2'): \n");

        /* game mode scan */
        int m;
        if (scanf("%d%d", &m) < 2 && &m > 0)
        {
            fprintf(stderr, "Wrong input! \n");
            return 1;
        }
        else if (m = 2)
        {
            const int mode = 2;
            printf("advanced mode selected! \n");
        }
        else 
        {
            const int mode = 1;
            printf("normal mode selected! \n");
        }

    printf("Now choose if you want to have a best of 
            one / three / five / seven or nine (type in the command line '1' / '3' / .. ): \n");
        
        /* best of scan */
        int b;
        if (scanf("%d", &b) > 0  &&  &b < <= 10)
        {
            b = 0;
        }
        switch (b) 
        {
            case 1:
                const int bestof = 1;
                break;
            case 3:
                const int bestof = 3;
                break;
            case 5:
                const int bestof = 5;
            case 7: 
                const int bestof = 7;
            case 9: 
                const int bestof = 9;
            default: 
                fprintf(stderr, "Wrong Input! \n");
        }


/* Game Start */



    // scoreboard

    return 0;
}