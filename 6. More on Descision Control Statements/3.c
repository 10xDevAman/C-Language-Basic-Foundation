// Write a program to take marks of 5 subjects from the user. Assume mark are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
int main()
{
    int phy, che, maths, cs, pe;
    printf("\nEnter marks of Physics :");
    scanf("%d", &phy);
    printf("\nEnter marks of Chemistry :");
    scanf("%d", &che);
    printf("\nEnter marks of Mathematics :");
    scanf("%d", &maths);
    printf("\nEnter marks of Computer Science :");
    scanf("%d", &cs);
    printf("\nEnter marks of Physical Education :");
    scanf("%d", &pe);
    if (phy > 33)
        printf("\n\nStudent passed in Physics.");
    else
        printf("\n\nStudent fail in Physics.");
    if (che > 33)
        printf("\n\nStudent passed in Chemistry.");
    else
        printf("\n\nStudent fail in Chemistry.");
    if (maths > 33)
        printf("\n\nStudent passed in Mathematics.");
    else
        printf("\n\nStudent fail in Mathematics.");
    if (cs > 33)
        printf("\n\nStudent passed in Computer Science.");
    else
        printf("\n\nStudent fail in Computer Science.");
    if (pe > 33)
        printf("\n\nStudent passed in Physical Education.");
    else
        printf("\n\nStudent fail in Physical Education.");
    return 0;
}