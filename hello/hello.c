#include <stdio.h>

int main(void)
{
    // Declare a character array to hold the name. We assume that the name will not be more than 100 characters.
    char name[101];

    // Prompt the user for their name
    printf("What's your name? ");
    scanf("%s", name);

    // Print a personalized greeting
    printf("Hello, %s\n", name);

    return 0;
}
