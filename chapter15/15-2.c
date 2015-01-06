#include <stdio.h>

int main()
{
    char str[80];

    while (gets(str) != NULL) {
        puts(str);
    }

    return 0;
}
