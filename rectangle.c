#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("This program requires a height and width to calculate");  
        return 1;
    };

    int height = atoi(argv[1]);
    int width = atoi(argv[2]);

    int perimeter = (width * 2) + (height * 2);
    int area = height * width;

    printf("The height is: %d\nThe width is: %d\nThe perimeter is: %d\nThe area is: %d\n",height, width, perimeter, area);
    
    return 0;
}
