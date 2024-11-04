#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(const char *str) {

    if (*str == '\0') return 0;
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int sum, i;
    sum = 0;
    if (argc == 1) {
        printf("0\n");
        return 0;
    }
    for (i = 1; i < argc; i++) {
        if (!is_positive_integer(argv[i])) {
            printf("Error\n");
            return 1;
        }
        
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return 0;
}
