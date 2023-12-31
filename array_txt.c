#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "statistics.h"


int main() {
    
    double *array = (double *)calloc(100 ,sizeof(double)); // Using calloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    double *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function


    // Open a text file for writing
    FILE *file = fopen("result.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Write mean and variance to the file
    fprintf(file, "Mean: %.2f\n", result[0]);
    fprintf(file, "Variance: %.2f\n", result[1]);

    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}
