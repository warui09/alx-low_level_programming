#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define PASSWORD_LENGTH 8

/**
 *main - genrate valid passwords for 101-crackme
 */

int main() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_size = sizeof(charset) - 1;
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL) ^ getpid());

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_size];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}

