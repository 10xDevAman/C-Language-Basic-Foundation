// For ques-4, define a function to update score_board after each match result.


#include <stdio.h>

#define PLAYERS 4

void updateScoreBoard(int score_board[][PLAYERS], int player1, int player2, int result);

int main()
{
    int score_board[PLAYERS][PLAYERS];
    int i, j;
    int player1, player2, result;

    for(i = 0; i < PLAYERS; i++)
    {
        for(j = 0; j < PLAYERS; j++)
        {
            if(i == j)
                score_board[i][j] = -1;
            else
                score_board[i][j] = 0;
        }
    }

    printf("Enter Player 1 (1-4): ");
    scanf("%d", &player1);

    printf("Enter Player 2 (1-4): ");
    scanf("%d", &player2);

    printf("\nResult:\n");
    printf("1. Player 1 Wins\n");
    printf("0. Draw\n");
    printf("2. Player 2 Wins\n");

    printf("Enter Result: ");
    scanf("%d", &result);

    updateScoreBoard(score_board, player1 - 1, player2 - 1, result);

    printf("\nUpdated Score Board:\n");

    for(i = 0; i < PLAYERS; i++)
    {
        for(j = 0; j < PLAYERS; j++)
        {
            printf("%2d ", score_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void updateScoreBoard(int score_board[][PLAYERS], int player1, int player2, int result)
{
    if(result == 1)
    {
        score_board[player1][player2] = 2;
        score_board[player2][player1] = 0;
    }
    else if(result == 0)
    {
        score_board[player1][player2] = 1;
        score_board[player2][player1] = 1;
    }
    else if(result == 2)
    {
        score_board[player1][player2] = 0;
        score_board[player2][player1] = 2;
    }
}