#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Ask user to enter 2 numbers
    double first_number = get_double("First Number: ");
    double second_number = get_double("Second Number: ");
    // Ask user to choose an operation
    string operation = get_string("Operation: ");
    // confirm operation is valid
    if (strcmp(operation, "+") != 0 && strcmp(operation, "-") != 0 && strcmp(operation, "*") != 0 &&
        strcmp(operation, "/") != 0)
    {
        printf("Invalid operation, please use + , - , * , or /\n");
        return 1;
    }
    // Perform chosen operation on the 2 numbers
    if (strcmp(operation, "+") == 0)
    {
        double answer = first_number + second_number;
        printf("%.2f\n", answer);
    }
    else if (strcmp(operation, "-") == 0)
    {
        double answer = first_number - second_number;
        printf("%.2f\n", answer);
    }
    else if (strcmp(operation, "*") == 0)
    {
        double answer = first_number * second_number;
        printf("%.2f\n", answer);
    }
    else if (strcmp(operation, "/") == 0)
    {
        // confirm not attempting to divide by 0
        if (second_number == 0)
        {
            printf("Cannot divide by 0\n");
            return 1;
        }
        double answer = first_number / second_number;
        printf("%.2f\n", answer);
    }
    return 0;
}
