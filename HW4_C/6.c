#include <stdio.h>

int main(){
    int n, count=0, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        //считываем число и сразу проверяем его
        scanf("%d", &num);
        if(num > 0){
            count++;
        }
    }
    printf("%d", count);
}