#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program is designed to calculate students overrall score.
 * Return: 0
 */

int main(void)
{
    float O_Day = 0;
    float Low_level_programming = 0;
    float System_engineering_DevOps = 0;
    float Evaluations = 0;
    int password = 11224;

     printf("Hi, I am bar_anoshs' bot and I am here to help you calculate your ALX overrall score.\n");
     printf("\nPlease drop the password: ");
     scanf("%d", &password);

     if(password == 11224)
     {
            printf("\nGreat! Now, what is your score for 0-Day? \n");
            scanf("%f", &O_Day);

            printf("\nWhat about your score for Low-level programming & Algorithm? \n");
            scanf("%f", &Low_level_programming);

            printf("\nI also need the score for your Low_level_programming: \n");
            scanf("%f", &System_engineering_DevOps);

            printf("\nKindly also let me know your score for the Evaluations you recently did: \n");
            scanf("%f", &Evaluations);

            float total = O_Day + Low_level_programming + System_engineering_DevOps + Evaluations;

            printf("\nThe sum of %f, %f, %f, and %f  gives a total score of %f\n", O_Day, Low_level_programming, System_engineering_DevOps, Evaluations, total);

            float division = total / 4;

            printf("\n%f / 4 gives you an average score of %f\n", total, division);

     }
     else
     {
         printf("Hey, that was wrong. Please ask for the right password and then come back. I will be waiting.\n");
     }

     return 0;
}
