#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "look around";

static bool getInput(void)
{
   printf("\nType command: ");
   return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
    char name[20];
    //Prikaz naslova igre, izbira imena
    printf("Welcome to Little Adventurer!\n");
    printf("Please choose a name(up to 20 characters): ");
    scanf("%s", name);
    printf("Hello %s!\n", name);

    //Klice glavno zanko in funkcijo, ki nam vraca uporabnikov vnos
    while (parseAndExecute(input) && getInput());

    //Sporocilo ko izstopimo iz glavne zanke
    printf("Goodbye, see you later.");


    return 0;
}

