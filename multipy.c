/*
Q5:נתונה הפעולה multiply המקבלת שני מספרים ואמורה להחזיר את תוצאת הביטוי y*x) נתון 0>x 
Q5 :write 
*/
#include <stdio.h>
int multiply(int x,int y);

int main() {
    int x, y, result;

    printf("Enter a positive integer: ");
    scanf("%d", &x);
    printf("Enter a nother integer: ");
    scanf("%d", &y);

    result = multiply(x,y);

    printf("multiply = %d", result);
    return 0;
}

int multiply (int x, int y ) 
 { 
 if ( x == 1 ) {
    return y;
 }
 else
 {
    return multiply (x-1, y)+y;
 }}     