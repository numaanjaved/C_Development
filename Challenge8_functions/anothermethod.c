#include <stdio.h>

int gcd_main(int x, int y){
    int greater = 0; int lesser = 0; int ans = 0;
    if(x > y){
        greater = x;
        lesser = y;
    }
    if(y > x){
        greater = y;
        lesser = x;
    }
    int remainder_array[20] = {}; int remainder;
    remainder_array[1] = greater % lesser;
    if(remainder_array[1] != 0){
        remainder_array[0] = lesser;
    }
    //printf("remainder = %d\n", remainder_array[0]);
    for(int i = 1; i < 20; ++i){
        if(remainder_array[i] != 0){
            remainder_array[i+1] = remainder_array[i-1] % remainder_array[i];
            //printf("remainder = %d\n", remainder_array[i+1]);
            if(remainder_array[i+1] == 0){
                 ans = remainder_array[i];
            }
        }
    }
    return ans;
}
float abs_main(float abs){
    float ans = 0;
    if(abs < 0){
        ans = - abs;
    }
    else ans = abs;
    return ans;
}
int sqr_main(int square){
    int ans = 0; int div = 0;
    for(int i = 1; i < square; ++i){
        div = square / i;
        if(div == i){
            ans = div;
        }
    }
    return ans;
}
int greaterCommonDivisor(){
     int x = 0; int y = 0;
    printf("\n\tFirst Part of the Program is Greatest Common Divisor\n");
    printf("\n\tIn this part you have to enter 2 numbers and the program will tell you its greatest common divisor\n");
    printf("\n\t\tPlease Enter your first number : "); scanf("%d", &x);
    printf("\n\t\tPlease Enter your second number : "); scanf("%d", &y);
    /*function to call greater common divisor computation*/
    int gcomd = gcd_main(x,y);
    printf("\n\t\tGreater Common divisor for numbers %d and %d is %d\n\n", x, y, gcomd);
    return 0;    
}

int absoluteValue(){
    float abs = 0;
    printf("\n\tSecond Part of the Program is Absolute Value\n");
    printf("\n\tIn this part you have to enter a number and program will convert it to its positive value\n");
    printf("\n\t\tPlease Enter your desired number : "); scanf("%f", &abs);
    float absVal = abs_main(abs);
    printf("\n\t\tThe absolute value for your desired number %.3f is %.3f\n\n", abs, absVal);
    return 0;
}
int squareroot(){
    int square = 0;
    printf("\n\tThird Part of the Program is Square Root\n");
    printf("\n\tIn this part you have to enter a number and program will find its squareroot for you\n");
    printf("\n\t\tPlease Enter your desired number : "); scanf("%d", &square);
    int number = square;
    if(number < 0){
        printf("\n\t\tYour desired number is negative, the program will take its absolute value now\n");
        square = abs_main(square);
    }
    /*function to call square root computation*/
    int squareRoot = sqr_main(square);
    if(squareRoot !=0){
        if(number < 0){
            printf("\n\t\tThe square root of absolute value of your desired number %d is %d\n\n", number, squareRoot);
        }
        else{
            printf("\n\t\tThe square root of your desired number %d is %d\n\n", number, squareRoot);
        }
    }
    else{
        printf("\n\t\tYour desired number does not have an integer square root\n\n");
    }
   
    return 0;
}
int main(){
    /*function to call greater common divisor part*/
    //greaterCommonDivisor();
    /*function to call absolute value part*/
    //absoluteValue();
    /*function to call squareroot part*/
    squareroot();
    return 0;
}