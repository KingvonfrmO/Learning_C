#include <cstdio>


int main(){
    int i;

    for (i = 0; i < 10; i++){
        if (i != 9){
            putchar(i + '0');
            putchar(',');
            putchar(' ');
        }
        else{
            putchar(i + '0');
        }
    }

    return 0;
}