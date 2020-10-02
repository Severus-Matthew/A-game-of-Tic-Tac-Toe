#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 char nm[15];
    char am[15];
    char arr[3][3];
    char P1 ='O';
    char P2 ='X';
    
    int i = 0 ;
    int r1;
    int r2;
    int aj = 0;

    void state() {
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t-----------------------------------------------------\n", arr[0][0], arr[0][1], arr[0][2]);
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t-----------------------------------------------------\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t------------------------------------------------------\n", arr[2][0], arr[2][1], arr[2][2]);
}
void movep1(int r1) {
    if (r1 == 1) {
        if (arr[0][0] == ' ') {
            arr[0][0] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE!! LOL");
        }
    }
    else if (r1 == 2) {
        if (arr[0][1] == ' ') {
            arr[0][1] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");

        }
    }
    else if (r1 == 3) {
        if (arr[0][2] == ' ') {
            arr[0][2] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r1 == 4) {
        if (arr[1][0] == ' ') {
            arr[1][0] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r1 == 5) {
        if (arr[1][1] == ' ') {
            arr[1][1] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r1 == 6) {
        if (arr[1][2] == ' ') {
            arr[1][2] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r1 == 7) {
        if (arr[2][0] == ' ') {
            arr[2][0] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r1 == 8) {
        if (arr[2][1] == ' ') {
            arr[2][1] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }

    }
    else if (r1 == 9) {
        if (arr[2][2] == ' ') {
            arr[2][2] = P1;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else {
        printf("invalid input! YOU LOSE THIS CHANCE");
    }
}

void movep2(int r2) {

    if (r2 == 1) {
        if (arr[0][0] == ' ') {
            arr[0][0] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 2) {
        if (arr[0][1] == ' ') {
            arr[0][1] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");

        }
    }
    else if (r2 == 3) {
        if (arr[0][2] == ' ') {
            arr[0][2] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 4) {
        if (arr[1][0] == ' ') {
            arr[1][0] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 5) {
        if (arr[1][1] == ' ') {
            arr[1][1] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 6) {
        if (arr[1][2] == ' ') {
            arr[1][2] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 7) {
        if (arr[2][0] == ' ') {
            arr[2][0] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else if (r2 == 8) {
        if (arr[2][1] == ' ') {
            arr[2][1] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }

    }
    else if (r2 == 9) {
        if (arr[2][2] == ' ') {
            arr[2][2] = P2;
        }
        else {
            printf("This postion is already marked!! YOU LOSE THIS CHANCE");
        }
    }
    else {
        printf("invalid input! YOU LOSE THIS CHANCE");
    }
}

void winp2() {
      if ((arr[0][0] == P2 && arr[0][1] == P2 && arr[0][2] == P2) || (arr[1][0] == P2 && arr[1][1] == P2 && arr[1][2] == P2) || (arr[2][0] == P2 && arr[2][1] == P2 && arr[2][2] == P2) || (arr[0][0] == P2 && arr[1][1] == P2 && arr[2][2] == P2) || (arr[0][2] == P2 && arr[1][1] == P2 && arr[2][0] == P2) || (arr[0][0] == P2 && arr[1][0] == P2 && arr[2][0] == P2) || (arr[0][1] == P2 && arr[1][1] == P2 && arr[2][1] == P2) || (arr[0][2] == P2 && arr[1][2] == P2 && arr[2][2] == P2)) {
            printf("Player 2 WINS !!!");
            aj = 1;

        }

}

void winp1() {
    if ((arr[0][0] == P1 && arr[0][1] == P1 && arr[0][2] == P1) || (arr[1][0] == P1 && arr[1][1] == P1 && arr[1][2] == P1) || (arr[2][0] == P1 && arr[2][1] == P1 && arr[2][2] == P1) || (arr[0][0] == P1 && arr[1][1] == P1 && arr[2][2] == P1) || (arr[0][2] == P1 && arr[1][1] == P1 && arr[2][0] == P1) || (arr[0][0] == P1 && arr[1][0] == P1 && arr[2][0] == P1) || (arr[0][1] == P1 && arr[1][1] == P1 && arr[2][1] == P1) || (arr[0][2] == P1 && arr[1][2] == P1 && arr[2][2] == P1)) {
        printf("Player 1 WINS !!!");
        aj = 1;

    }

}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

int main() {
    arr[0][0] = '1';
    arr[0][1] = '2';
    arr[0][2] = '3';
    arr[1][0] = '4';
    arr[1][1] = '5';
    arr[1][2] = '6';
    arr[2][0] = '7';
    arr[2][1] = '8';
    arr[2][2] = '9';



    printf("Please Enter Name of Player 1 \n");
    scanf("%s", &nm);
    printf("\nPlease Enter Name of Player 2\n");
    scanf("%s", &am);
    printf("\t\t THE RULES\n\n");
    delay(2000);
    printf("This is a Game of Tic Tac.\n ");
    delay(1000);
    printf("It is for two players, each player gets a chance in which he enters the cell number where he wants to put his mark.\n");
    delay(1000);
    printf("The player who gets three of his marks in a straight line - Horizontal/vertical/diagonal- Wins the game.\n");
    delay(1000);
    printf("If you try to mark an alredy marked position you will lose that chance!");
    delay(1000);
    printf("The cell numbers are given here for refrence-\n");
    delay(1000);
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t -----------------------------------------------------\n", arr[0][0], arr[0][1], arr[0][2]);
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t-----------------------------------------------------\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("\t\t\t %c \t | \t %c \t | \t %c \t | \n \t\t------------------------------------------------------\n", arr[2][0], arr[2][1], arr[2][2]);
    delay(1000);
    printf("\t\t Let's Begin !!");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = ' ';
        }
    }



    if(aj != 1) {
        for(int chance = 1; chance < 9 && aj!=1 ; chance++){
           if (chance % 2 == 1) {
               printf("Player 1's Turn\n");
               delay(1000);
                printf("Enter Your position of Mark\n");
                scanf("%d", &r1);
                movep1(r1);
                state();
                winp1();
           }
           else {
               printf("Player 2's Turn\n");
               delay(1000);
               printf("Enter Your position of Mark\n");
               scanf("%d", &r2);
               movep2(r2);
              state();
              winp2();
           }
        }
      return 0;
    }


}
