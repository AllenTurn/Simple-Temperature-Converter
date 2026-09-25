#include <stdio.h>
#include <windows.h>

int main() {
    int choice;
    float temp, result;

    printf("===== Simple Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 7) {
        printf("Goodbye!\n");
        return 0;
    }

    printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice) {

        case 1:
            result = (temp * 9 / 5) + 32;
            printf("%.2f C = %.2f F\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        case 2:
            result = temp + 273.15;
            printf("%.2f C = %.2f K\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        case 3:
            result = (temp - 32) * 5 / 9;
            printf("%.2f F = %.2f C\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        case 4:
            result = (temp - 32) * 5 / 9 + 273.15;
            printf("%.2f F = %.2f K\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        case 5:
            result = temp - 273.15;
            printf("%.2f K = %.2f C\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        case 6:
            result = (temp - 273.15) * 9 / 5 + 32;
            printf("%.2f K = %.2f F\n", temp, result);
            printf("The Program is Closing in 5 seconds...\n");
            Sleep(5000);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}