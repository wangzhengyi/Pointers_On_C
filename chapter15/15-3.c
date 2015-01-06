#include <stdio.h>

#define BUFFER_SIZE 256

int main()
{
    char buf[BUFFER_SIZE];

    while (fgets(buf, BUFFER_SIZE, stdin) != NULL) {
        fputs(buf, stdout);
    }

    return 0;
}
