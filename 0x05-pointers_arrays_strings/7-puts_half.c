#include "main.h"

void puts_half(char *str){
    int len, i, n;

    i = 0;
    len = 0;
    while(str[len] != '\0'){
        len++;
    }

    if(len % 2 != 0){
        n = (len - 1) / 2;

        for (i = n; str[i] != '\0'; i++){
            _putchar(str[i]);
        }
    }
    for (i = len / 2; str[i] != '\0'; i++){
        _putchar(str[i]);
    }

    _putchar('\n');

}