#include <cstdio>


int main(){
    int i, j, k;

    for (i = 0; i < 8; i++){
        for (j = 0; j < 9; j++){
            for (k = 0; k < 10; k++){
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i != 7 || j != 8 || k != 9){
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}