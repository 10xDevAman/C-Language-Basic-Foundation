// There are five classes with different number of students in them. Five arrays containing marks of students of each class. Write a function to receive an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among all the classes.


#include <stdio.h>

int highestMarks(int **marks, int sizes[], int classes);

int main()
{
    int class1[] = {78, 85, 92, 67, 88};
    int class2[] = {90, 76, 84};
    int class3[] = {65, 95, 81, 72, 89, 93};
    int class4[] = {70, 86, 91, 79};
    int class5[] = {88, 74, 96, 82, 69, 91, 85};

    int *marks[5];

    int sizes[5] = {5, 3, 6, 4, 7};

    marks[0] = class1;
    marks[1] = class2;
    marks[2] = class3;
    marks[3] = class4;
    marks[4] = class5;

    printf("Highest Marks = %d\n",
           highestMarks(marks, sizes, 5));

    return 0;
}

int highestMarks(int **marks, int sizes[], int classes)
{
    int i, j;
    int highest = **marks;

    for(i = 0; i < classes; i++)
    {
        for(j = 0; j < sizes[i]; j++)
        {
            if(*(*(marks + i) + j) > highest)
            {
                highest = *(*(marks + i) + j);
            }
        }
    }

    return highest;
}