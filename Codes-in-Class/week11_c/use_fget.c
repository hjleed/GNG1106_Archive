#include <stdio.h>
//fgets() automatically adds a null terminator \0 at the end of the string.
// The maximum number of characters it reads is n-1, leaving room for the null terminator.
int main() {
    char text[256];

    printf("Enter a line:\n");
	//reads up to 99 characters from standard input (stdin) 
	//or until a newline \n is encountered, whichever comes first.
    fgets(text, 100, stdin);

    printf("You typed: %s", text);
    return 0;
}
