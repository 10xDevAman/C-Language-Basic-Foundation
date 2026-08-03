// For ques-4, define a function which returns the score of a specific player.


#include <stdio.h>

#define PLAYERS 4

int getPlayerScore(int score_board[][PLAYERS], int player);

int main()
{
    int score_board[PLAYERS][PLAYERS] =
    {
        {-1, 2, 1, 0},
        { 0,-1, 2, 1},
        { 1, 0,-1, 2},
        { 2, 1, 0,-1}
    };

    int player;

    printf("Enter Player Number (1-4): ");
    scanf("%d", &player);

    printf("Total Score of Player %d = %d\n",
            player,
            getPlayerScore(score_board, player - 1));

    return 0;
}

int getPlayerScore(int score_board[][PLAYERS], int player)
{
    int i;
    int total = 0;

    for(i = 0; i < PLAYERS; i++)
    {
        if(i != player)
            total += score_board[player][i];
    }

    return total;
}