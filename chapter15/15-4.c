#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

FILE* open_file(char* prompt, char* mode)
{
    char buf[BUFFER_SIZE];
    FILE* file;

    printf("Please enter %s filename?\n", prompt);

    if (fscanf(stdin, "%s", buf) == EOF) {
        fprintf(stderr, "Missing %s file name.\n", prompt);
        exit(EXIT_FAILURE);
    }

    if ((file = fopen(buf, mode)) == NULL) {
        perror(buf);
        exit(EXIT_FAILURE);
    }

    return file;
}

int main()
{
    char buf[BUFFER_SIZE];
    FILE* input;
    FILE* output;

    input = open_file("INPUT", "r");
    output = open_file("OUTPUT", "w");

    while (fscanf(input, "%s\n", buf) != EOF) {
        fprintf(output, "%s\n", buf);
    }

    return 0;
}
