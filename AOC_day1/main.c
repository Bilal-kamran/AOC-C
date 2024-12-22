#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "input1.h"
#include "input2.h"
#include "Bubblesort.h"

int main() {
    // PART 1
    // Calculate the total distance between the two lists

    // Size of the two lists
    int n1 = INPUT1_S;
    int n2 = INPUT2_S;

    // Sort the two lists that are needed to be diffrentiated
    printf("Sorting the input lists... \n");
    bubblesort(input1, n1);
    bubblesort(input2, n2);

    // Subtracting the two lists first elements to get the difference and putting them inside of another array
    int min_size = (n1 < n2)? n1 : n2;
    int total_distance = 0;

    for (int i = 0; i < min_size; i++)
    {
        total_distance += labs(input1[i] - input2[i]);
    }

    printf("The total distance b/w is: %d \n", total_distance);
    // The answer for AOC day 01 part 01 is 2367773

    // PART 2
    // Calculate how many times a number has appeared in the list 2 and calculate its score
    int total_score = 0;
    int counter;

    for (int i = 0; i < min_size; i++)
    {
        counter = 0;

        for (int j = 0; j < min_size; j++)
        {
            if (input1[i] == input2[j])
            {
                counter ++;
            }
        }
        total_score += input1[i] * counter;
    }

    printf("The total score of occurencies of all the elements of list one in list two is: %d\n", total_score);

    return 0;
}
