#include <cs50.h>
#include <stdio.h>

int main(void)
/* Prints length of user-inputted string */
{
    // Prompt for string
    string s = get_string("String: ");

    // Initialize length
    int length = 0;

    // Terminate loop once the NUL character is encountered
    while (s[length] != '\0')
    {
        length++;
    }

    // Print length
    printf("%i\n", length);
}
