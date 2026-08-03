// For ques-4, define a function to display rank of the players.


#include <stdio.h>

#define PLAYERS 4

void displayRank(int score_board[][PLAYERS]);

int main()
{
    int score_board[PLAYERS][PLAYERS] =
    {
        {-1, 2, 1, 0},
        { 0,-1, 2, 1},
        { 1, 0,-1, 2},
        { 2, 1, 0,-1}
    };

    displayRank(score_board);

    return 0;
}

void displayRank(int score_board[][PLAYERS])
{
    int score[PLAYERS];
    int i, j, rank;

    for(i = 0; i < PLAYERS; i++)
    {
        score[i] = 0;

        for(j = 0; j < PLAYERS; j++)
        {
            if(i != j)
                score[i] += score_board[i][j];
        }
    }

    printf("\nPlayer\tScore\tRank\n");

    for(i = 0; i < PLAYERS; i++)
    {
        rank = 1;

        for(j = 0; j < PLAYERS; j++)
        {
            if(score[j] > score[i])
                rank++;
        }

        printf("P%d\t%d\t%d\n", i + 1, score[i], rank);
    }
}