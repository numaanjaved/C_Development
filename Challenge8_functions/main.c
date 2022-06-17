#include <stdio.h>

int gcd(int x, int y){
    int greater = 0;
    if(x > y){
        greater = x;
    }
    if(y > x){
        greater = y;
    }
    int z[greater]; int multipleOfNumber1[x]; int multipleOfNumber2[y];
    int multipleX = 0; int multipleY = 0;
    printf("Multiples of Number %d are ", x);
    for(int i = 1; i < x; ++i){
        z[i] = x % i;
        if(z[i] == 0){
            multipleOfNumber1[multipleX] = i; 
            printf("%d ", multipleOfNumber1[multipleX]);
            ++multipleX;
           
        }
    }
    printf("\nMultiples of Number %d are ", y);
    for(int j = 1; j < y; ++j){
         z[j] = y % j;
        if(z[j] == 0){
            multipleOfNumber2[multipleY] = j;
            printf("%d ", multipleOfNumber2[multipleY]);
            ++multipleY;
            
        }
    }
    int common = 0; int comm[10];
    printf("\nCommon multiples of %d and %d are ", x, y);
    for(int k = 0; k < multipleX; ++k){
        for(int l = 0; l < multipleY; ++l){
            if(multipleOfNumber1[k] == multipleOfNumber2[l]){
                printf("%d ",multipleOfNumber2[l]);
                comm[common] = multipleOfNumber2[l];
                ++common;
            }
        }
    }
    
    return 0;
}

int main(){
    int x = 0; int y = 0;
    printf("\n\tFirst Part of the Program is Greatest Common Divisor\n");
    printf("\n\tIn this part you have to enter 2 numbers and the program will tell you its greatest common divisor\n");
    printf("\n\t\tPlease Enter your first number : "); scanf("%d", &x);
    printf("\n\t\tPlease Enter your second number : "); scanf("%d", &y);
    int data = gcd(x,y);
    return 0;
}