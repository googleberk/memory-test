//
//  main.c
//  12
//
//  Created by Shuowei Li on 2/12/19.
//  Copyright © 2019 Shuowei Li. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int x;
    int y;
} Point;

Point pt1 = {10, 10};
Point pt2 = {12, 12};

typedef struct rect {
    Point pt1;
    Point pt2;
} Rect;

//Initialization of a Rect instance
Rect* initial(){
    Point pt1 = {10, 10};
    Point pt2 = {12, 12};
    Rect *screen = (Rect *)malloc(sizeof(Rect));
    screen->pt1 = pt1;
    screen->pt2 = pt2;
    return screen;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Rect* screen = initial();
    printf("%d, %d \n", pt1.x, pt2.x);
    printf("%d, %d \n",  screen->pt1.x, screen->pt2.x);
    //printf("Hello, World!\n");
    free(screen);
    return 0;
}
