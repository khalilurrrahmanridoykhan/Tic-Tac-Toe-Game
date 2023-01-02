#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<mmsystem.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();
void stat();

int main(){
    system("color 06");
    int i,choice,player = 1;
    char mark; // X,0
    do{
        //stat();
        drawBoard();
        player = (player%2) ? 1:2;
        printf("\t\t\t\t\t  player %d, enter the choice:", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X':'O';
        if (choice==1 && square[1]=='1'){

            square[1]=mark;
        }
        else if(choice==2 && square[2]=='2'){
            square[2]=mark;
        }
        else if(choice==3 && square[3]=='3'){
            square[3]=mark;
        }
        else if(choice==4 && square[4]=='4'){
            square[4]=mark;
        }
        else if(choice==5 && square[5]=='5'){
            square[5]=mark;
        }
        else if(choice==6 && square[6]=='6'){
            square[6]=mark;
        }
        else if(choice==7 && square[7]=='7'){
            square[7]=mark;
        }
        else if(choice==8 && square[8]=='8'){
            square[8]=mark;
        }
        else if(choice==9 && square[9]=='9'){
            square[9]=mark;
        }
        else{
            printf("\n\t\t\t\t\t\tInvalid option");
            player--;
            getch();
        }
        i=checkWin();
        player++;

    }while(i== -1);

    if (i==1){

        printf("\t\t\t\t\t\t==>Player %d Won", --player);
    }
    else{
        printf("\t\t\t\t\t\t==>Game Draw!");
    }
    getch();
    return 0;
 }

int checkWin(){

    if (square[1]==square[2] && square[2]==square[3]){

        return 1;
    }
    else if (square[4]==square[5] && square[5]==square[6]){

        return 1;
    }
    else if (square[7]==square[8] && square[8]==square[9]){

        return 1;
    }
    else if (square[1]==square[4] && square[4]==square[7]){

        return 1;
    }
    else if (square[2]==square[5] && square[5]==square[8]){

        return 1;
    }
    else if (square[3]==square[6] && square[6]==square[9]){

        return 1;
    }
    else if (square[1]==square[5] && square[5]==square[9]){
        return 1;
    }
    else if (square[3]==square[5] && square[5]==square[7]){

        return 1;
    }
    else if (square[1] != '1' && square[2] !='2' && square[3] !='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7] !='7' && square[8]!='8' && square[9]!='9'){
        return 0;
    }
    else{
        return -1;
    }

 }

void drawBoard(){

    system("cls");
    printf("\n\n\n\t\t\t\t\t\t    Tic Tac Toe \n\n\n");
    printf("\t\t\t\t\t    Player1 (X) - Player2 (O) \n\n\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n", square[1],square[2],square[3]);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n", square[4],square[5],square[6]);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n", square[7],square[8],square[9]);
    printf("\t\t\t\t\t\t     |     |     \n");
 }

 void stat(){

    system(" color 0B");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t\tTIC TAC TOP\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Loading");
    char x= 219;
    for (int i=0;i<35;i++ ){

        printf("%c",x);
        if(i<10)
            Sleep(300);
        if(i>=10 && i<20)
            Sleep(150);
        if(i>=10)
            Sleep(25);
    }
    system("cls");


}
