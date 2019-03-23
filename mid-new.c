#include<stdio.h>



char board[49];
char input1[3], input2[3];

int move;

void initializeBoard();
void showBoard();
int calcIndex(char* input);
int takeInput();
void makeMove();

int main()
{
    initializeBoard();
    showBoard();

    move = takeInput();

    makeMove();
    showBoard();

    return 0;
}

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
        else board[i] = '.';
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

int calcIndex(char* input)
{
    int x = (input[0] - 'a')*14 + (input[1] - '1')*2;

    return x;
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

        index1 = calcIndex(input1);
        index2 = calcIndex(input2);

        int diff = abs(index1 - index2);

        if(diff == 2 || diff == 14) break;

        printf("Invalid Input\n");
    }
    return (index1+index2)/2;
}

void makeMove()
{
    if((move%7)%2 == 1)
        board[move] = '_';
    else
        board[move] = '|';
}
