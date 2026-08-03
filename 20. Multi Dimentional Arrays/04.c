// Four players are playing a tournament of Chess with round robin method (each player will play with every other player ). Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the players against each player.


#include <stdio.h>

int main()
{
    int score_board[4][4];
    int i, j;

    printf("Enter the scores:\n");
    printf("(Win = 2, Draw = 1, Loss = 0)\n\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(i == j)
            {
                score_board[i][j] = -1;   // Player doesn't play with himself
            }
            else
            {
                printf("Score of Player %d against Player %d: ", i + 1, j + 1);
                scanf("%d", &score_board[i][j]);
            }
        }
    }

    printf("\nScore Board:\n\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%2d ", score_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}