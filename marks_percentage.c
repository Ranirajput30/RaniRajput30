#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, sum, percentage;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total sum
    sum = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage (assuming total marks = 500)
    percentage = (sum / 500.0) * 100;

    // Display the results
    printf("\nTotal Sum: %.2f", sum);
    printf("\nPercentage: %.2f%%\n", percentage);

    return 0;
}

