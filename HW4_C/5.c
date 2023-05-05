#include <stdio.h>

int main(){
    int num;
    double summ = 0, nums = 0;
    scanf("%d", &num);
    //считываем пока не ноль
    while (num != 0)
    {
        //кол-во чисел в последовательности
        nums++;
        //сумма этих чисел
        summ += num;
        scanf("%d", &num);
    }
    printf("%f", summ / nums);
}