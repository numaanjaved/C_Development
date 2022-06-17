#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 to 20 which you must guess.\n");
    int Guess = 0;
    for(int noOfTries = 5; noOfTries > 0; --noOfTries){
        printf("You have %d tries left\n", noOfTries);
        printf("Enter a Guess: ");
        scanf("%d", &Guess);
        if(Guess <= 20 && Guess >= 0){
            if(Guess < randomNumber){
                printf("\nSorry, %d is wrong. My number is greater than that.\n", Guess);
            }
            if(Guess > randomNumber){
                printf("Sorry, %d is wrong. My number is less than that.\n", Guess);
            }
            if(Guess == randomNumber){
                printf("Congratulations, You guessed it right. My number is %d\n", randomNumber);
                return 0;
            }
        }
        if(Guess > 20){
            printf("You have entered a number out of range 0 - 20. Please enter a number in between 0 and 20.\n");
        }
    }
    printf("GameOver! You lost. My number was %d\n", randomNumber);
    return 0;
}