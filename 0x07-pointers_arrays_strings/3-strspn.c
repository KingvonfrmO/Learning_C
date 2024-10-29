#include "main.h"

unsigned int _strspn(char *s, char *accept){
    unsigned int n = 0;

    int i, found;

    while(*s){
        found = 0;
        for(i = 0; accept[i]; i++){
            if (*s == accept[i]){
                n++;
                found = 1;
                break;
            }
        }
        if (!found){
            return n;
        }
        s++;
    }

    return n;
}