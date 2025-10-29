#include "get_string.h"
#include <stdio.h>
#include <stdlib.h>

char* get_string() {
    char *str = NULL;
    int ch;
    size_t len = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        char *temp = realloc(str, len + 2);
        if (!temp) {
            free(str);
            return NULL;
        }
        str = temp;
        str[len++] = ch;
    }

    if (str) {
        str[len] = '\0';
    } else {
        str = calloc(1, sizeof(char));
    }

    return str;
}

