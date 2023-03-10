/*
** A 'C' port of the fantastic 'blinmaker' inspired by Boris (https://www.youtube.com/watch?v=FMIZEfjYmtM)
**
** Goran Todorovic (2023-03-11)
**
*/

#include <stdio.h>

int main(void)
{

    int eggsAmount = 0;
    int eggsMin = 1;
    int milkAmount = 0;
    int milkMin = 200;
    int flourAmount = 0;
    int flourMin = 100;


    printf("Welcome!\nBlinmaker is starting up...\n\n");

    printf("How many eggs do you have? ");
    scanf("%d", &eggsAmount);

    printf("How much milk (ml) do you have? ");
    scanf("%d", &milkAmount);

    printf("How much flour (g) do you have? ");
    scanf("%d", &flourAmount);

    if (eggsAmount < eggsMin || milkAmount < milkMin || flourAmount < flourMin)
    {
        printf("\nNo blin today :(\n");
        return 0;
    }    

    eggsAmount = eggsAmount / eggsMin;
    milkAmount = milkAmount / milkMin;
    flourAmount = flourAmount / flourMin;

    printf("OK, so you have %d portions of eggs, %d portions of milk and %d portions of flour...\n", eggsAmount, milkAmount, flourAmount);

    int smallest = 0;
    if (eggsAmount <= milkAmount && milkAmount <= flourAmount)
    {
        smallest = eggsAmount;
    }
    else if (milkAmount <= flourAmount && flourAmount <= eggsAmount)
    {
        smallest = milkAmount;
    }
    else
    {
        smallest = flourAmount;
    }

    printf("So, in order to make %d blins you'll have to prepare:\n\n", smallest);

    printf("%8d    eggs\n", smallest * eggsMin);
    printf("%8dml  milk\n", smallest * milkMin);
    printf("%8dg   flour\n", smallest * flourMin);

    printf("\nBlinmaker is shutting down... and stay cheeki breeki!\n");

    return 0;
}