//Using calloc instead of malloc
#include<stdlib.h>
#include<stdio.h>
#include "statistics.h"

int main() {
    
    double *array = (double *)calloc(100 ,sizeof(double)); // Using calloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        printf("Assigning value to array[%d]\n", i);
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    double *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function

    printf("Mean: %f\nVariance: %f\n", result[0], result[1]); // Print the results

    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}
