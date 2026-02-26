#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WIN, LOSE};
int rollDie(void);

int main(void) {

    srand(time(NULL));
    int myPoints = 0;
    enum Status gameStatus = CONTINUE;

    //initial dice roll
    int sum = rollDie();
    switch(sum) {
        case 7:
        case 11:
            gameStatus = WIN;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOSE;
            break;
        default:
            gameStatus = CONTINUE;
            myPoints = sum;
            printf("The number of points is %d\n", myPoints);
            break;
    }
    // continued roll
    while(gameStatus == CONTINUE) {
        sum = rollDie();
        if(sum == myPoints) {
            gameStatus = WIN;
        }
        else if(7 == sum) {
            gameStatus = LOSE;

        }

    }
    if(gameStatus == WIN) {
        puts("You win!");
    }
    else if(gameStatus == LOSE) {
        puts("You lose!");
    }
    return 0;

    }//main

//rolls 2 dice and returns their added values
int rollDie(void) {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int rollValue = die1 + die2;

    printf("Player rolled a %d + %d = %d \n",die1, die2, rollValue);
    return die1 + die2;
}
