// Storing mean and variance in binary file

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "statistics.h"

int main() {
    
    double *array = (double *)calloc(100 ,sizeof(double)); // Using calloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        printf("Before Assignment array[%d] =%f \n", i,array[i]);
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    double *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function


     // Open a binary file for writing
    FILE *file = fopen("result2.bin", "wb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Write mean and variance to the binary file
    fwrite(result, sizeof(double), 2, file);

    // Close the file
    fclose(file);


    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}
