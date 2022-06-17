#include <stdio.h>
#include <stdlib.h>
const char PLAY1 = 'O';
const char PLAY2 = 'X';

int turn_function(char array[10], int v, int turn){
    if(v % 2 == 0){
        printf("\n\tPlayer 2:\n");
    }
    else{
        printf("\n\tPlayer 1:\n");
    }
    printf("\n\tEnter your desired box number = "); scanf("%d", &turn);
    if(array[turn] == PLAY2 || array[turn] == PLAY1){
        printf("\n\tThe box is already occupied. Please enter another desired box number: "); scanf("%d", &turn);
    }
    if(v % 2 == 0){
        array[turn] = PLAY2; 
    }
    else{
        array[turn] = PLAY1; 
    }
    return 0;
}
void board(char array[10]){
    
    printf("\n\t*************************\n");
    printf("\t*\t*\t*\t*\n");
    if(array[7] || array[8] || array[9]){
        printf("\t*   %c   *   %c   *   %c   *\n", array[7], array[8], array[9]);
    }
    else{
        printf("\t*   7   *   8   *   9   *\n");
    }
    printf("\t*\t*\t*\t*\n");
    printf("\t*************************\n");
    printf("\t*\t*\t*\t*\n");
    if(array[4] || array[5] || array[6]){
        printf("\t*   %c   *   %c   *   %c   *\n", array[4], array[5], array[6]);
    }
    else{
        printf("\t*   4   *   5   *   6   *\n");
    }
    printf("\t*\t*\t*\t*\n");
    printf("\t*************************\n");
    printf("\t*\t*\t*\t*\n");
    if(array[1] || array[2] || array[3]){
        printf("\t*   %c   *   %c   *   %c   *\n", array[1], array[2], array[3]);
    }
    else{
        printf("\t*   1   *   2   *   3   *\n");
    }
    printf("\t*\t*\t*\t*\n");
    printf("\t*************************\n");
    return;
}
int win(char array[10]){
    int win = 0;
    /*Winning Conditions for Player 1*/
    /*Horizontal Winning Conditions*/
    if(array[1] == PLAY1 && array[2] == PLAY1 && array[3] == PLAY1){
        win = 1;
    }
    if(array[4] == PLAY1 && array[5] == PLAY1 && array[6] == PLAY1){
        win = 1;
    }
    if(array[7] == PLAY1 && array[8] == PLAY1 && array[9] == PLAY1){
        win = 1;
    }
    /*Vertical Winning Conditions*/
    if(array[1] == PLAY1 && array[4] == PLAY1 && array[7] == PLAY1){
        win = 1;
    }
    if(array[2] == PLAY1 && array[5] == PLAY1 && array[8] == PLAY1){
        win = 1;
    }
    if(array[3] == PLAY1 && array[6] == PLAY1 && array[9] == PLAY1){
        win = 1;
    }
    /*Diagonal Winning Conditions*/
    if(array[1] == PLAY1 && array[5] == PLAY1 && array[9] == PLAY1){
        win = 1;
    }
    if(array[3] == PLAY1 && array[5] == PLAY1 && array[7] == PLAY1){
        win = 1;
    }
    /*Winning Conditions for Player 2*/
    /*Horizontal Winning Conditions*/
    if(array[1] == PLAY2 && array[2] == PLAY2 && array[3] == PLAY2){
        win = 2;
    }
    if(array[4] == PLAY2 && array[5] == PLAY2 && array[6] == PLAY2){
        win = 2;
    }
    if(array[7] == PLAY2 && array[8] == PLAY2 && array[9] == PLAY2){
        win = 2;
    }
    /*Vertical Winning Conditions*/
    if(array[1] == PLAY2 && array[4] == PLAY2 && array[7] == PLAY2){
        win = 2;
    }
    if(array[2] == PLAY2 && array[5] == PLAY2 && array[8] == PLAY2){
        win = 2;
    }
    if(array[3] == PLAY2 && array[6] == PLAY2 && array[9] == PLAY2){
        win = 2;
    }
    /*Diagonal Winning Conditions*/
    if(array[1] == PLAY2 && array[5] == PLAY2 && array[9] == PLAY2){
        win = 2;
    }
    if(array[3] == PLAY2 && array[5] == PLAY2 && array[7] == PLAY2){
        win = 2;
    }
    return win;
}
int main(){
    char array[10] = {
        [0] = '0', [1] = '1', [2] = '2', [3] = '3', [4] = '4', [5] = '5', [6] = '6', [7] = '7', [8] = '8', [9] = '9'
    };
   
    int turn = 0; int noOfTurns = 0; int player = 0;
    for(int v = 1; v < 10; ++v){
        system("clear");
        printf("\n\tTic Tac Toe Game\n");
        printf("\n\tThis game is 1vs1 Game. Only 2 players can play this game turn by turn\n");
        printf("\n\tPlayer1(%c)\tPlayer2(%c)\n", PLAY1, PLAY2);
        /*Playing Board is called*/
        board(array);
        /*Turns Function is called*/
        turn_function(array, v, turn);
        noOfTurns = ++array[0];
        
        /*Winning Conditions are called*/

        player = win(array);
        if (player == 1 || player == 2){
            printf("\n\tCongratulations Player %d, You Win\n", player);
            break;
        }
    }
    if(player == 0){
        printf("\n\tOOPS!! The game is Drawn\n");
    }
    printf("\n\tThe Game is completed in %c turns.\n\n", noOfTurns);
    
    return 0;
}