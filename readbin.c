// This program reads the content of result2.bin and display it on the terminal

#include <stdio.h>

int main() {
    // Open the binary file for reading
    FILE *file = fopen("result2.bin", "rb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1;
    }

    // Read the result from the binary file
    double result[2];
    fread(result, sizeof(float), 2, file);

    // Close the file
    fclose(file);

    // Display the result
    printf("Mean: %.2f\n", result[0]);
    printf("Variance: %.2f\n", result[1]);

    return 0;
}
