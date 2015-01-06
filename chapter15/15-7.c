#include <stdio.h>

#define BUFFER_SIZE 512

int main()
{
    char buffer[BUFFER_SIZE];
    int members, sum, i;
    int age[10];

    while (fgets(buffer, BUFFER_SIZE, stdin) != NULL) {
        members = sscanf(buffer, "%d %d %d %d %d %d %d %d %d %d", age, age + 1, age + 2,
                age + 3, age + 4, age + 5, age + 6, age + 7, age + 8, age + 9);

        if (members == 0) {
            continue;
        }

        for (i = sum = 0; i < members; i ++) {
            sum += age[i];
        }
        printf("%5.2f: %s", (double) sum / members, buffer);
    }

    return 0;
}
