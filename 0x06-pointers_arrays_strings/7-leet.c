#include "main.h"

char *leet(char *str){
    int i, j;

    char a[] = "aAeEoOtTlL";
    char b[] = "443300771";

    for (i = 0; str[i] != '\0'; i++){
        for(j = 0; a[j] != '\0'; j++){
            if (str[i] == a[j]){
                str[i] = b[j];
                break;
            }
        }

    }

    return str;
}