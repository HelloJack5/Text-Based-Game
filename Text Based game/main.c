#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static char input[100] = "look around";

static bool getInput(void)
{
   printf("\nType command: ");
   return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
    char name[20];
    printf("Welcome to \"insert game name here\"\n");
    printf("Please choose a name(up to 20 characters): ");
    scanf("%s", name);
    printf("Hello %s!\n", name);
    printf("You find yourself at a crossroads, in front of you is a big building with a sign,\nto your left there are thick trees with a path beneath\nand to your right there is a playground with kids playing at it.\n");
    printf("Which way do you wish to go? Type left to go left, right to go right, and straight to go straight.\n");
    //while (parseAndExecute(input) && getInput());
    printf("Goodbye, see you later.");


    return 0;
}

