#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototype
void TossDie(int dice[], int numDice);

int main()
{
    int dice[6];
    int numDice;

    // Seed the random number generator
    srand(time(NULL));

    // Ask how many dice to toss
    printf("How many dice would you like to toss (1-6)? ");
    scanf("%d", &numDice);

    // Check for valid input
    if (numDice < 1 || numDice > 6)
    {
        printf("Please enter a number between 1 and 6.\n");
        return 1;
    }

    // Toss the dice
    TossDie(dice, numDice);

    // Display the results
    printf("Dice results: ");

    for (int i = 0; i < numDice; i++)
    {
        printf("%d ", dice[i]);
    }

    printf("\n");

    return 0;
}

// Function to toss the dice
void TossDie(int dice[], int numDice)
{
    for (int i = 0; i < numDice; i++)
    {
        dice[i] = rand() % 6 + 1;
    }
}
