#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <name> <int_value> <float_value>\n", argv[0]);
        return 1;
    }

    char *name = argv[1];
    int int_value = atoi(argv[2]);
    double float_value = atof(argv[3]);

    printf("Name: %s\n", name);
    printf("Integer value: %d\n", int_value);
    printf("Float value: %.1f\n", float_value);

    return 0;
}
