#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* ptriGameBoard; 
int iGameBoardSize;

int  CreateGameBoard(int iN) 
{
   
    if (iN > 10) 
    {
        iGameBoardSize = iN;
        ptriGameBoard = malloc(sizeof(int) * iN);

        for (int iPosition = 0; iPosition < iGameBoardSize; iPosition++) ptriGameBoard[iPosition] = 1;
        
    }

    else return 0; 
}
void ShowGameBoard() 
{
    
    for (int iPosition = 0; iPosition < iGameBoardSize; iPosition++)

    printf("%d | ", ptriGameBoard[iPosition]);
    
    printf("% d\n", ptriGameBoard[iGameBoardSize - 1]);

}

int SetPosition(int iPosition) 
{
    // returns 1 if valid
    if (iPosition <= iGameBoardSize) {
        if (ptriGameBoard[iPosition] == 1) {
            ptriGameBoard[iPosition] = 0;
            return 1;
        }
        else return 2; // position has been taken
    }
    else return 0;
}
int GameOver() 
{
    
    int iGameOver = 0; // game is not over
    for (int iPosition = 0; iPosition < iGameBoardSize; iPosition++) 
    {
        if (ptriGameBoard[iPosition] == 1) iGameOver++;
    }

    if (iGameOver > 1) return 0;

    else return 1;

}
void DoGame() 
{
    printf("DoGame\n"); // Debug
    int iPositions;

    printf("\nHow many position on the game board? : ");

    scanf_s("%d", &iPositions);

    if (CreateGameBoard(iPositions)) ShowGameBoard();

    else printf("\nUnable to create Game Board, position must be greater than 10.\n\n");
    
    int iMove = 1;
    int iSelect;

    while (iMove < iGameBoardSize) 
    {
        if (iMove % 2) 
        {
            printf("Player one move? :");
        }
        else printf("Player two move ? : ");
        scanf_s("%d", &iSelect);
        switch (SetPosition(iSelect)) 
     {
        case 0: 
        {
            printf("Invalid move.\n");
            break;
        }
        case 1: 
        {
            iMove++; // this is a valid move
            break;
        }
        case 2: 
        {
            printf("Position %d has been selected already.\n", iSelect);
        }
     }

        ShowGameBoard();

        if (GameOver()) 
        {
            printf(" Game Over, player ");
            if (iMove % 2) printf("ONE ");

            else printf("TWO ");
            printf("wins\n");

            break;
        }
    }
}

int main() 
{    
    DoGame();
}
