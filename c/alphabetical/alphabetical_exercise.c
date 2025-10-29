#include <stdio.h>
#include "get_string.h"
#include <string.h>

int main(){


    char* text = get_string("Input: ");

    for (size_t i=1; i<strlen(text); i++){

        if (text[i] < text[i - 1]){

           printf("Nope\n");
           return 0;         
        }

        printf("Yes\n");

    }
    

    return 0;
}
