#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the mean and variance of array of 1, 4, 9, 16....., 100^2
float *calculate_mean_variance(float *array, int length) {
    float *result = (float *)malloc(2 * sizeof(float));
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
    
    float *array = (float *)malloc(100 * sizeof(float)); // Using malloc, create an array of hundred float elements

    for (int i = 0; i < 100; ++i) {
        array[i] = (i+1)*(i+1); // Assign values to the elements of the array
    }
   
    float *result = calculate_mean_variance(array, 100); // Calculate mean and variance using the function

    printf("Mean: %f\nVariance: %f\n", result[0], result[1]); // Print the results

    // Free the memory used for the array
    free(array); 
    free(result);

    return 0;
}
