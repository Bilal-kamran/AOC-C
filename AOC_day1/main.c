#include <stdio.h>
#include <stdlib.h>
#include "input1.h"
#include "input2.h"
#include "Bubblesort.h"

int main() {
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

    return 0;
}
