#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "input.h"

int arr_y_size (int arr[SIZEX][SIZEY], int i);
int sign (int x);

int main() {

    // Advent of code day 01 part 01 SOLVED
    // answer is 252

    int counter = 0;
    int direction = 0;
    int size_y;

    for (int i = 0; i < SIZEX; i++)
    {

        bool is_monotonic = true;
        size_y = arr_y_size(list, i);

        for (int j = 0; j < size_y - 1; j++)
        {

            int diff = list[i][j + 1] - list[i][j];

            if (abs(diff) < 1 || abs(diff) > 3)
            {
                is_monotonic = false;
                break;
            }

            if (j == 0)
            {
                direction = sign(diff);
            }
            else if (direction != sign(diff))
            {
                is_monotonic = false;
                break;
            }
        }
        printf("%d\n", is_monotonic);

        if (is_monotonic)
        {
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}

int arr_y_size (int arr[SIZEX][SIZEY], int i) {
    int counter = 0;

    for (int j = 0; j < SIZEY; j++)
    {
        if (arr[i][j] != -1)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    return counter;
}

int sign (int x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}
