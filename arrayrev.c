#include <stdio.h>

void printNumberName(int number) {
    switch (number) {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        // Add more cases as needed for other numbers
        default:
            printf("Unknown ");
    }
}

int main() {
    int inputNumbers[6];
    
    // Input numbers
    printf("Enter six numbers separated by spaces: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &inputNumbers[i]);
    }

    // Print the names in reverse order
    printf("Output: ");
    for (int i = 5; i >= 0; i--) {
        printNumberName(inputNumbers[i]);
    }
    printf("\n");

    return 0;
}
