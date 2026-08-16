// Define a structure triangle which can contain lengths of the sides of a triangle. Sort a list of triangles according to their areas. Input format – first line contains a number n which is number of triangles. Subsequent n lines, each contains three space separated numbers (sides of the triangle). Output format – display the tuples (side1, side2, side3) of triangle in sorted order (according to area of triangle).


#include <stdio.h>
#include <math.h>

struct Triangle
{
    double side1;
    double side2;
    double side3;
};

double area(struct Triangle t)
{
    double s;

    s = (t.side1 + t.side2 + t.side3) / 2;

    return sqrt(s * (s - t.side1) *
                (s - t.side2) *
                (s - t.side3));
}

int main()
{
    int n, i, j;
    struct Triangle temp;

    scanf("%d", &n);

    struct Triangle triangles[n];

    // Input
    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf",
              &triangles[i].side1,
              &triangles[i].side2,
              &triangles[i].side3);
    }

    // Sort according to area
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(area(triangles[j]) > area(triangles[j + 1]))
            {
                temp = triangles[j];
                triangles[j] = triangles[j + 1];
                triangles[j + 1] = temp;
            }
        }
    }

    // Display sorted triangles
    for(i = 0; i < n; i++)
    {
        printf("%.0lf %.0lf %.0lf\n",
               triangles[i].side1,
               triangles[i].side2,
               triangles[i].side3);
    }

    return 0;
}