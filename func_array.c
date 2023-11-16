// Contains function to calculate mean and variance

#include<stdlib.h>
#include "statistics.h"

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
