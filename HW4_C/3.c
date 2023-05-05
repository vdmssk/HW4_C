#include <stdio.h>
#include <string.h>

int main(char password[]) {
    scanf("%s", password);
    int len = strlen(password);
    int BL = 0, SL = 0, digit = 0, symb = 0;
    for(int i = 0; i < len; i++){
        //ASCII
        if(password[i] < 33 || password[i] > 126) {
        //большая буква
            if(password[i] >= 'A' && password[i] <= 'Z') {
        //маленькая буква
                if(password[i] >= 'a' && password[i] <= 'z') {
        //Если цифра
                    if(password[i] >= '0' && password[i] <= '9') {
        //символ из диапазона
                        if(password[i] >= 33 && password[i] <= 126) {
        //Проверка длины
                            if(len < 8 || len > 14) {
                                printf("TRUE");
        else {
            printf("FALSE");
        }
    }}}}}}}
    return 0;
}
