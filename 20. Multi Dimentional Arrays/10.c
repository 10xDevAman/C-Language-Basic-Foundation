// For ques-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.


#include <stdio.h>

#define PLAYERS 4

void updateScoreBoard(int score_board[][PLAYERS], int p1, int p2, int result);
void runTournament(int score_board[][PLAYERS]);
void displayScoreBoard(int score_board[][PLAYERS]);

int main()
{
    int score_board[PLAYERS][PLAYERS];
    int i, j;

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

    runTournament(score_board);

    printf("\nFinal Score Board:\n");
    displayScoreBoard(score_board);

    return 0;
}

void updateScoreBoard(int score_board[][PLAYERS], int p1, int p2, int result)
{
    if(result == 1)
    {
        score_board[p1][p2] = 2;
        score_board[p2][p1] = 0;
    }
    else if(result == 0)
    {
        score_board[p1][p2] = 1;
        score_board[p2][p1] = 1;
    }
    else if(result == 2)
    {
        score_board[p1][p2] = 0;
        score_board[p2][p1] = 2;
    }
}

void runTournament(int score_board[][PLAYERS])
{
    int i, j, result;

    printf("Result Codes:\n");
    printf("1 -> First Player Wins\n");
    printf("0 -> Draw\n");
    printf("2 -> Second Player Wins\n\n");

    for(i = 0; i < PLAYERS - 1; i++)
    {
        for(j = i + 1; j < PLAYERS; j++)
        {
            printf("Match: Player %d vs Player %d\n", i + 1, j + 1);
            printf("Enter Result: ");
            scanf("%d", &result);

            updateScoreBoard(score_board, i, j, result);
        }
    }
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