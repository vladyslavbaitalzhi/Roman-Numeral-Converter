#include <stdio.h>

int roman(int i, int j, char c){
    while (i >= j){
        putchar(c);
        i -= j;
    }
}

int main(void){
    int user_number;
    printf("Enter number: ");
    scanf("%d", &user_number);

    printf("Roman number: ");
    user_number = roman(user_number, 1000, 'M');
    user_number = roman(user_number, 500, 'D');
    user_number = roman(user_number, 100, 'C');
    user_number = roman(user_number, 50, 'L');
    user_number = roman(user_number, 10, 'X');
    user_number = roman(user_number, 5, 'V');
    user_number = roman(user_number, 1, 'I');

    putchar('\n');

    return 0;
}