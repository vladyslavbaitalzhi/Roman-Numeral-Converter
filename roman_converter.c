#include <stdio.h>
#include <conio.h>

int roman(int value, int number, char symbol){
    while (value >= number){
        putchar(symbol);
        value -= number;
    }
    return value;
}

void closeApp(){
    putchar('\n');
    printf("Press any key to exit... ");
    getch();
}

int main(void){
    unsigned int userInput = 0;

    printf("Arabic to Roman numeral converter\n");
    
    printf("Enter your number [1-3999]: ");
    scanf("%u", &userInput);

    if (userInput < 1 || userInput > 3999) {
        printf("Invalid input!");
    }
    
    userInput = roman(userInput, 1000, 'M');
    userInput = roman(userInput, 500, 'D');
    userInput = roman(userInput, 100, 'C');
    userInput = roman(userInput, 50, 'L');
    userInput = roman(userInput, 10, 'X');
    userInput = roman(userInput, 5, 'V');
    userInput = roman(userInput, 1, 'I');

    closeApp();
    
    return 0;
}
