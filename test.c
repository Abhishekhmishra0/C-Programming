#include <stdio.h>

int main() {
    int radius, i, j;

    // Get the radius of the circle
    printf("Enter the radius of the star circle: ");
    scanf("%d", &radius);

    // Loop for each row
    for (i = -radius; i <= radius; i++) {
        // Loop for each column
        for (j = -radius; j <= radius; j++) {
            // Check if the current position is inside the circle
            if (i * i + j * j <= radius * radius) {
                printf("* ");
            } else {
                printf("  ");  // Print spaces outside the circle
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
