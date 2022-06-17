#include <stdio.h>

int main(){
    char string[100];
    int number;


    printf("Enter the number and Name with space in between: ");
    scanf("%d %s", &number, string);

    printf("\nYou entered %d::::%s\n", number, string);
    return 0;
}