#include <stdio.h>
int main() { 
int m, y, res;
scanf("%d %d",&m,&y);
if (m == 1) {
    res == 31;    
} if (((y%4==0)&&(y%100!=0)||(y%400==0)) && (m ==2)) {
    res == 29;
} if (m == 2) {
    res == 28;    
} if (m == 3) {
    res == 31;    
} if (m == 4) {
    res == 30;    
} if (m == 5) {
    res == 31;    
} if (m == 6) {
    res == 30;    
} if (m == 7) {
    res == 31;    
} if (m == 8) {
    res == 31;    
} if (m == 9) {
    res == 30;    
} if (m == 10) {
    res == 31;    
} if (m == 11) {
    res == 30;    
} if (m == 12) {
    res == 31;    
}
    printf("%d",res);
}
