// Using gsl library to calculate mean and variance

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_statistics.h>
#include "statistics.h"

int main() {
    
    double *array = (double *)calloc(100 ,sizeof(double)); // Using calloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    double *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function
    printf("Mean: %f\nVariance: %f\n", result[0], result[1]); // Print the results using loops

    // Calculate mean and variance using GSL functions
    double gsl_mean = gsl_stats_mean(array, 1, 100);
    double gsl_variance = gsl_stats_variance(array, 1, 100);

    // Print mean and variance using GSL functions
    printf("\nGSL Mean: %.2f\n", gsl_mean);
    printf("GSL Variance: %.2f\n", gsl_variance);

    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}
