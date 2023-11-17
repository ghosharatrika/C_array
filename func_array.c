// Contains function to calculate mean and variance

#include<stdlib.h>
#include "statistics.h"

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
