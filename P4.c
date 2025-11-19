#include <stdio.h>
int main() {
    int i;
    float f;
    char ch;

    printf("enter integer, float, character: ");
    scanf("%d %f %c", &i, &f, &ch);

    printf("entered : %d, %.3f, %c", i, f, ch);

    return 0;
}