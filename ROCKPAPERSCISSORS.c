// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcompch();
int getuserch();
int userc;
char winner;


int main() {
    srand(time(NULL));
    
    printf("                ROCK PAPER SCISSOR!\n");
    
    int user = getuserch();
    //printf("%d", user);
    while(user != 1 && user != 2 && user != 3){
        printf("INVALID CHOICE!\nTRY AGAIN!");
        user = getuserch();  // FIX: Removed 'int' declaration - was creating a new local variable
    }
    
    if(user == 1){
       printf("YOU CHOSE ROCK!\n"); 
    } else if(user == 2){
        printf("YOU CHOSE PAPER!\n");
    } else if(user == 3){
        printf("YOU CHOSE SCISSORS!\n");
    } 
    
    int comp = getcompch();
    
    if(comp == 1){
       printf("COMPUTER CHOSE ROCK!\n"); 
    } else if(comp == 2){
        printf("COMPUTER CHOSE PAPER!\n");
    } else if(comp == 3){
        printf("COMPUTER CHOSE SCISSORS!\n");
    }
    
    // FIX: Changed 'userc' to 'user' - userc is a global but user is the validated value from loop
    if(user == 1 && comp == 3){
        winner = 'Y';  // FIX: Changed from char array to char, winner already declared globally
        printf("SO YOU ARE THE WINNER!");
    }else if(user == 1 && comp == 2){
        winner = 'C';
        printf("SO COMPUTER IS THE WINNER!");
    }else if(user == 1 && comp == 1){
        winner = 'D';
        printf("SO IT'S A DRAW!");
    }else if(user == 2 && comp == 1){
        winner = 'Y';
        printf("SO YOU ARE THE WINNER!");
    }else if(user == 2 && comp == 3){
        winner = 'C';
        printf("SO COMPUTER IS THE WINNER!");
    }else if(user == 2 && comp == 2){
        winner = 'D';
        printf("SO IT'S A DRAW!");
    }else if(user == 3 && comp == 2){
        winner = 'Y';
        printf("SO YOU ARE THE WINNER!");
    }else if(user == 3 && comp == 1){
        winner = 'C';
        printf("SO COMPUTER IS THE WINNER!");
    }else if(user == 3 && comp == 3){
        winner = 'D';
        printf("SO IT'S A DRAW!");
    }
    return 0;
}

int getcompch(){
    return (rand() % 3) + 1;
}

int getuserch(){
    printf("1. ROCK\n2. PAPER\n3. SCISSORS") ;   
    printf("\nENTER YOU CHOICE: ");
    scanf("%d", &userc);
    return userc;
}

