#include "stdio.h"

int main(){
    unsigned long fib1, fib2, next;
    int count;

    fib1 = 1;
    fib2 = 2;

    printf("%lu, %lu", fib1,fib2);

    for (count = 3; count <= 98; count++){
        next = fib1 + fib2;

        if( count != 98){
            printf(", %lu, ",next);
        }

        fib1 = fib2;
        fib2 = next;
    }
}