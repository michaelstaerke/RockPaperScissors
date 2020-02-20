#include <stdio.h>      // Standard IO
#include <stdlib.h>     

int main(void)
{
    int pc_score = 0;
    int pl_score = 0;
    
    int mode;
    int bestof;

    // normal mode
    const int rock = 1;
    const int paper = 2;
    const int scissors = 3;

    // advanced mode
    const int fountain = 4;
    const int match = 5;


/* Start Questions */

    printf("\n\n\n");
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("+ Welcome to RockPaperScissors ! +\n");
    printf("++++++++++++++++++++++++++++++++++\n");
    printf("\n\n");

    printf(">> Select a game mode:\n");
    printf(">> Choose normal mode '1' or advanced mode '2'  || Type in the command line '1' or '2'||: \n");
        
        /* game mode - scan */

        enum gameMode { nM = 1, aM = 2 };

        int modeUserInput;
        if (scanf("%d", &modeUserInput) != nM | aM)
        {
            fprintf(stderr, ">> Wrong input, try again! \n\n");
        }
        else if (modeUserInput == 2)
        {
            const int selectedMode = 2;
            printf(">> Advanced mode selected! \n\n");
        }
        else 
        {
            const int selectedMode = 1;
            printf(">> Normal mode selected! \n\n");
        }


    printf(">> Now choose if you want to have a best of one / three / five / seven or nine (type in the command line '1' / '3' / .. ): \n");
        
        /* best of - scan 
        int b;
        if (scanf("%d", &b) > 0  &&  &b <= 10)
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
                break;
            case 7: 
                const int bestof = 7;
                break;
            case 9: 
                const int bestof = 9;
                break;
            default: 
                fprintf(stderr, "Wrong Input! \n");
        }
        */


/* Game Start */



    // scoreboard

    return 0;
}