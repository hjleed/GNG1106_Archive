#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];  // Large enough to hold the copied string

    // Copy only the first 5 characters from source to destination
    strncpy(destination, source, 5);
    destination[5] = '\0';  // Manually adding null terminator to avoid partial strings

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
