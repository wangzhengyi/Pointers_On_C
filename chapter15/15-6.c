#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char* str, int len) {
    if (len <= 0) {
        return 0;
    }

    if (len == 1) {
        return 1;
    }

    int i, j, flag = 1;
    for (i = 0, j = len - 1; i < j;) {
        if (str[i ++] != str[j --]) {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int num, flag;
    char str[50];

    while (fscanf(stdin, "%d", &num) != EOF) {
        sprintf(str, "%d", num);
        flag = palindrome(str, strlen(str));
        if (flag) {
            printf("This string is palindrome!\n");
        } else {
            printf("This string is not palindrome!\n");
        }
    }

    return 0;
}
