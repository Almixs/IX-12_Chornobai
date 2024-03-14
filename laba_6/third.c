#include <stdio.h>
//#include <conio.h> // Видалив, оскільки conio.h не є стандартною бібліотекою у багатьох компіляторах
#define STOP '*'

int main() {
    char ch;
    ch = getchar();
    
    ml: if (ch != STOP) {
        putchar(ch);
        ch = getchar();
        goto ml;}

    return 0;
}