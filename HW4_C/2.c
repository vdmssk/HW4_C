#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int count = n;
    for(int i = 0; i < n - 1; i++){
        printf("%2c ", ' ');
    } //расчитываем и выводим пробелы
    for(int i = 1; i <= k; i++){
        printf("%2d ", i); 
        count++;
        //цикл, чтобы каждые 7 символов переводить вывод на новую строку
        if(count > 7){
            printf("\n");
            count = 1;
        } //счетчик 
    }
    printf("\n");
}