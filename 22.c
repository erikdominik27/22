#include <stdio.h>

int areacalc(int base, int height);

int main()
{
    int base, height;
    printf("Please enter a base: ");
    scanf("%d", &base);
    printf("Please enter a height: ");
    scanf("%d", &height);
    printf("The area of the triangle is: %d", areacalc(base, height));
}

int areacalc(int base, int height)
{
    return (base * height) / 2;
    }
