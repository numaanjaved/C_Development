#include <stdio.h>

int main(){
    printf("The size of int in this computer is %zd\n", sizeof(int));
    printf("The size of char in this computer is %zd\n", sizeof(char));
    printf("The size of long in this computer is %zd\n", sizeof(long));
    printf("The size of long int in this computer is %zd\n", sizeof(long int));
    printf("The size of long long in this computer is %zd\n", sizeof(long long));
    printf("The size of double in this computer is %zd\n", sizeof(double));
    printf("The size of long double in this computer is %zd\n", sizeof(long double));
    return 0;
}