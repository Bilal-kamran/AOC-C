#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "input.h"

int arr_y_size (int arr[SIZEX][SIZEY], int i);
int is_safe (int arr[SIZEX][SIZEY], int i, int size);
int rmsafe (int arr[SIZEX][SIZEY], int i, int size);
int sign (int x);

int main() {

    // Advent of code day 01 part 01 SOLVED
    // answer is 252

    int counter = 0;
    int size_y;

    for (int i = 0; i < SIZEX; i++)
    {

        size_y = arr_y_size(list, i);

        if (is_safe(list, i, size_y) == 1)
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
        else {
            break;
        }
    }
    return counter;
}

int is_safe (int arr[SIZEX][SIZEY], int i, int size) {
    int issafe = 1;
    int direc = 0;

    for (int j = 0; j < size - 1; j++) {
        int diff = arr[i][j + 1] - arr[i][j];

        if (abs(diff) < 1 || abs(diff) > 3)
        {
            issafe = 0;
            break;
        }

        if (j == 0)
        {
            direc = sign(diff);
        }
        else if (direc != sign(diff))
        {
            issafe = 0;
            break;
        }
    }

    return issafe;
}


int rmsafe (int arr[SIZEX][SIZEY], int i, int size) {
    int n = size - 1;
    int *newarr = malloc((n) * sizeof(int));
    int skip_index = 0;
    int issafe = 1;

    for (int i = 0; i < size; i++)
    {
    }

    return issafe;
}

int sign (int x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}
