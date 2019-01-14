//
//  main.c
//  fill-array-random-nums
//
//  Created by Eli Levit on 13/01/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input_random_array (int *, int );
void print_array (int *, int);


int main() {
    int b [10];
    input_random_array(b, 10);
    print_array(b, 10);
}

void input_random_array(int * ar, int size) {
    int i;
    srand( (unsigned int) time(NULL));
    
    for (i = 0; i < size; i ++) {
        ar[i] = (rand()% 10) + 1;
    }
}

void print_array (int *ar, int size) {
    int i;
    for (i = 0; i < size; i ++) {
        printf("value is %d\n", ar[i]);
    }
}

