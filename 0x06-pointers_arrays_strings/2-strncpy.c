#include "main.h"

char *_strncpy(char *dest, char *src, int n){
    int i, j;

    j = 0;

    for(i = 0; i < n && src[i] != '\0'; i++){
        dest[j] = src[i];
        j++;
    }
    for(; i < n; i++){
        dest[i] = '\0';
    }
    return dest;
}