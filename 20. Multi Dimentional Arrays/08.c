// For ques-4, define a function to find the winner of the tournament

#include <stdio.h>

#define PLAYERS 4

int findWinner(int score_board[][PLAYERS]);

int main()
{
    int score_board[PLAYERS][PLAYERS] =
    {
        {-1, 2, 1, 0},
        { 0,-1, 2, 1},
        { 1, 0,-1, 2},
        { 2, 1, 0,-1}
    };

    int winner;

    winner = findWinner(score_board);

    printf("Winner of the Tournament is Player %d\n", winner);

    return 0;
}

int findWinner(int score_board[][PLAYERS])
{
    int i, j;
    int total, maxScore = -1;
    int winner = 0;

    for(i = 0; i < PLAYERS; i++)
    {
        total = 0;

        for(j = 0; j < PLAYERS; j++)
        {
            if(i != j)
                total += score_board[i][j];
        }

        if(total > maxScore)
        {
            maxScore = total;
            winner = i;
        }
    }

    return winner + 1;
}