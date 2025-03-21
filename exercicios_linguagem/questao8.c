#include <stdio.h>

struct Retangle {
    float height;
    float width;
};

float calculateArea(struct Retangle *r) {
    return r->height * r->width;
}

int main() {
    struct Retangle newRetangle;
    
    printf("What is the width of the retangle?\n ");
    scanf("%f", &newRetangle.width);
    
    printf("What is the height of the retangle?\n");
    scanf("%f", &newRetangle.height);
    
    printf("The area is: %.2f\n", calculateArea(&newRetangle));
    
    return 0;
}
