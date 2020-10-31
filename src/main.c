#include <stdio.h>
#include <math.h>

void calculate_double() {
    fprintf(stdout, "DOUBLE EXPERIMENT: \n");
    double x2, y2, deviation = 0.0001, x1 = 1, y1 = 1, first_meaning = 0.0, secondary_meaning = 0.0;
    int count = 0;
    do {
        y2 = ((2.0001 + deviation) - 2) / 0.0001;
        x2 = 2 - y2;
        first_meaning = x2 + 1.0001 * y2;
        if (first_meaning == secondary_meaning) {
            fprintf(stdout,
                    "With a further decrease in the deviation, the value of the second system, second equation will always be the same. \n");
            break;
        }
        count++;
        secondary_meaning = first_meaning;
        fprintf(stdout, "Step:%d ", count);
        fprintf(stdout, "Value of the second system, second equation:%.17f ", first_meaning);
        fprintf(stdout, "Deviation:%.28f \n", deviation);
        deviation = deviation / 2;
    } while (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) > 0.000001);
    fprintf(stdout, "x2=%.17f y2=%.18f Distance between points on the coordinate plane:%.20f \n", x2, y2,
            sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
    fprintf(stdout, "x1=%.1f y1=%.1f  \n", x1, y1);
}

void calculate_float() {
    fprintf(stdout, "FLOAT EXPERIMENT: \n");
    float x2, y2, deviation = 0.0001f, x1 = 1, y1 = 1, first_meaning = 0.0f, secondary_meaning = 0.0f;
    int count = 0;
    do {
        y2 = ((2.0001f + deviation) - 2) / 0.0001f;
        x2 = 2 - y2;
        first_meaning = x2 + 1.0001f * y2;
        if (first_meaning == secondary_meaning) {
            fprintf(stdout,
                    "With a further decrease in the deviation, the value of the second system, second equation will always be the same. \n");
            break;
        }
        count++;
        secondary_meaning = first_meaning;
        fprintf(stdout, "Step:%d ", count);
        fprintf(stdout, "Value of the second system, second equation:%.17f ", first_meaning);
        fprintf(stdout, "Deviation:%.25f \n", deviation);
        deviation = deviation / 2;
    } while (sqrtf(powf((x1 - x2), 2) + powf((y1 - y2), 2)) > 0.000001f);
    fprintf(stdout, "x2=%.17f y2=%.18f Distance between points on the coordinate plane:%.20f \n", x2, y2,
            sqrtf(powf((x1 - x2), 2) + powf((y1 - y2), 2)));
    fprintf(stdout, "x1=%.1f y1=%.1f  \n", x1, y1);
}

int main() {
    calculate_double();
    printf("\n");
    calculate_float();
    return 0;
}
