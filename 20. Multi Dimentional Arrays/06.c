// For ques-4, define a function to display score_board.


#include <stdio.h>

#define PLAYERS 4

void displayScoreBoard(int score_board[][PLAYERS]);

int main()
{
    int score_board[PLAYERS][PLAYERS] =
    {
        {-1, 2, 1, 0},
        { 0,-1, 2, 1},
        { 1, 0,-1, 2},
        { 2, 1, 0,-1}
    };

    displayScoreBoard(score_board);

    return 0;
}

void displayScoreBoard(int score_board[][PLAYERS])
{
    int i, j;

    printf("\n\tP1 P2 P3 P4\n");

    for(i = 0; i < PLAYERS; i++)
    {
        printf("P%d\t", i + 1);

        for(j = 0; j < PLAYERS; j++)
        {
            printf("%2d ", score_board[i][j]);
        }

        printf("\n");
    }
}