#include "main.h"

void jack_bauer(void){
    int hours, minute;

    for (hours = 0; hours < 24; hours++){
        for (minute = 0; minute < 60; minute++){
            _putchar(hours / 10 + '0');
            _putchar(hours % 10 + '0');
            _putchar(':');
            _putchar(minute / 10 + '0');
            _putchar(minute % 10 + '0');
            _putchar('\n');
        }
        
    }

}