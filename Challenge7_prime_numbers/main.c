#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program finds the Prime Numbers between 1 to 100\n");
   
    unsigned int prime[50]; 
    unsigned int prime_count = 0;
    for(unsigned int whole = 2; whole < 100; ++whole){
        int count = 0;
        for(int integer = 1; integer < whole; ++integer){
            if(whole % integer == 0){
                count++;
            }
        }
        if(count == 1){
            prime[prime_count] = whole;
            prime_count++;
        }
    }
    for(int i = 0; i < prime_count; i++){
        if(prime[i] != 0){
            printf("%u ", prime[i]);
        }
    }
    return 0;
}