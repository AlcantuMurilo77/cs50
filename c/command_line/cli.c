#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Invalid number of arguments. Use: ./string {argument}\n");
        return 0;
    }

    char *text = argv[1];
    
    for (size_t i = 1; i < strlen(text); i++){
        if (!(isalpha(text[i]))){
            printf("Invalid character: %c. please enter only alfa\n", text[i]);
            return 0;
        }
    }

    for (size_t i = 1; i < strlen(text); i++){
    
        if (text[i] < text[i - 1]){
            printf("Nop\n");
            return 0;
        }
    }
    
    printf("Yes\n");
    return 0;
}

