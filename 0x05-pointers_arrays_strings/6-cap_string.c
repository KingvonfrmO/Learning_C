#include "main.h"

char *cap_string(char *s){

    int i;

    while(s[i] != '\0'){
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}'){
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z'){
                s[i + 1] -= 32;
            }
        }
        i++;
    }

    return s;

}