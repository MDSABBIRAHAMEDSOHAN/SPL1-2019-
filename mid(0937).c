#include<stdio.h>
#include<stdlib.h>


int move;
char board[49];
char input1[3], input2[3];



void initializeBoard();
void showBoard();
int takeInput();
void makeMove();


void initializeBoard()
{
    int i;
    for(i=0; i<49; i++)
    {
        if(i%2==1)
        {
             board[i] = ' ';
        }
        else if((i%7)%2 == 1)
        {
            board[i] = ' ';
        }
        else
        {
            board[i] = '.';
        }
    }
}

void showBoard()
{
    int i;
    char ch = 'a';

    printf("  1 2 3 4");

    for(i=0; i<49; i++)
    {
        if(i%14 == 0)
        {
            printf("\n%c ",ch++);
        }
        else if(i%7 == 0)
        {
            printf("\n  ");
        }
        printf("%c", board[i]);

    }
    printf("\n\n\n");

}



int takeInput()
{
    int index1, index2;
    while(1)
    {
        printf("Enter 1st coordinate: ");
        scanf("%s",&input1);

        printf("Enter 2nd coordinate: ");
        scanf("%s",&input2);
    }

}


/*
void makeMove()
{
    if((move%7)%2 == 1)
        board[move] = '_';
    else
        board[move] = '|';
}
*/


int main()
{

    initializeBoard();
    showBoard();
    takeInput();
    //makeMove();


    return 0;
}

