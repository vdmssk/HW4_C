#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num / 2 != 0) {
        (num / 2); //алгоритм перевода
    } if(num < 0) { //если меньше нуля, ставим минус
        printf("-");
        printf("%d", num % 2);
    } else {
        printf("%d", num % 2);
    }
    return 0;
}