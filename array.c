// This program calculates mean and variance of 1,4,9,16,....

#include<stdlib.h>
#include <stdio.h>
#include <math.h>

// Function to calculate the mean and variance of array of 1, 4, 9, 16....., 100^2
double *calculate_mean_variance(double *array, int length) {
    double *result = (double *)malloc(2 * sizeof(double));
    float mean = 0.0, variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; ++i) {
        mean += array[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; ++i) {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    variance /= length;

    result[0] = mean;
    result[1] = variance;

    return result;
}

int main() {
    
    double *array = (double *)malloc(100 * sizeof(double)); // Using malloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    double *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function

    printf("Mean: %f\nVariance: %f\n", result[0], result[1]); // Print the results

    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}