#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "input.h"

int arr_y_size (int arr[SIZEX][SIZEY]);

int main()
{
}

int arr_y_size (int arr[SIZEX][SIZEY]) {
    int counter = 0;

    for (int i = 0; i < SIZEX; i++)
    {
        for (int j = 0; j < SIZEY; j++)
        {
             if (arr[i][j] != -1)
            {
                counter++;
            }

            if (arr[i][j] == -1)
            {
                break;
            }
        }
    }
    return counter;
}
