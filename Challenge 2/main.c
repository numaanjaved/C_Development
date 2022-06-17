#include <stdio.h>
#include <stdlib.h>

int main(){
    double height = 0;
    double width = 0;
    double perimeter = 0;
    double area = 0;
    printf("Please enter the height of rectangle : ");
    scanf("%lf", &height);
    printf("Please enter the width of rectangle : ");
    scanf("%lf", &height);
    perimeter = (height + width) * 2;
    area = height * width;
    printf("The height of rectangle is %.2lf.\n The width of rectangle is %.2lf.\n The perimeter of rectangle is %.2lf.\n The area of rectangle is %.2lf.\n", height, width, perimeter, area); 
    return 0;
}