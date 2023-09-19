#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pl 16

int main(void)
{
    char password[pl +1];
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < pl; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[pl] = '\0';

    printf("%s\n", password);

    return 0;
}

