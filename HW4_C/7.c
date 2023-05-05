#include <stdio.h>

int main(){
    int n, pN = 0, mN = 0, zero = 0, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        //подсчитываем кол-во нулей
        if(num == 0){
            zero++;
        }
        //подсчитваем кол-во положительных чисел
        else if(num > 0){
            pN++;
        }
        //подсчитываем кол-во отрицательных чисел
        else{
            mN++;
        }
    }
    printf("%d %d %d", zero, pN, mN);
}