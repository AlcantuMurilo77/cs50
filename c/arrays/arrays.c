#include <stdio.h>


int main(void){

    int numbers[5];
    numbers[0] = 1;

    for (int i=1; i<5; i++){
        numbers[i] = numbers[i-1] * 2;
    }

    for (int i=0; i<5; i++){
        pritnf("%d\n", numbers[i]);
    }

    return 0;
}
