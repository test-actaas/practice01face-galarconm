#include <stdio.h>

int main() {
    char name[50];
    int age;
    float weight;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &weight);

    printf("My name is %s and I am %d years old. My weight is %.6f kg.\n", name, age, weight);
    
    return 0;
    
}
