#include <math.h>
#include <stdio.h>

#define eps 1e-6

int main() {
    double centimeters, inches;
    int feet;
    int is_first_query = 1;
    while (1) {
        if (is_first_query) {
            printf("Enter a height in centimeters: ");
            is_first_query = 0;
        } else {
            printf("Enter a height in centimeters (<=0 to quit): ");
        }
        scanf("%lf", &centimeters);
        if (centimeters == 0) {
            printf("bye\n");
            break;
        }
        inches = centimeters / 2.54;
        feet = inches / 12;
        inches -= 12 * feet;
        if (feet == 0) {
            if (fabs(inches - 1) < eps) {
                printf("%lf centimeters = 1 inch.\n", centimeters, inches);

            } else {
                printf("%lf centimeters = %.1lf inches.\n", centimeters,
                       inches);
            }
        } else if (feet == 1) {
            if (fabs(inches - 1) < eps) {
                printf("%lf centimeters = 1 foot, 1 inch.\n", centimeters,
                       inches);

            } else {
                printf("%lf centimeters = 1 foot, %.1lf inches.\n", centimeters,
                       inches);
            }
        } else {
            if (fabs(inches - 1) < eps) {
                printf("%.lf centimeters = %d feet, 1 inch.\n", centimeters,
                       feet, inches);

            } else {
                printf("%lf centimeters = %d feet, %.1lf inches.\n",
                       centimeters, feet, inches);
            }
        }
    }
    return 0;
}