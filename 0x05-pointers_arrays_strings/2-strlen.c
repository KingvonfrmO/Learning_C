#include "main.h"

int _strlen(char *s){
    int counter;

    counter = 0;
    while (*s != '\0')
    {
        counter ++;
        s++;
    }
    return counter;
}