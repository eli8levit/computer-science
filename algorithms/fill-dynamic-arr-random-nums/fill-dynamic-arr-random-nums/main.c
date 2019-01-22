//
//  main.c
//  fill-dynamic-arr-random-nums
//
//  Created by Eli Levit on 13/01/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdlib.h>

void print_array(int *, int);
int main() {
    int i;
    int size;
    int *a;
    printf("enter size of array:\n");
    scanf("%d", &size);
    a=(int *)malloc(size*sizeof(int));
    assert(a);
    srand( (unsigned int) time (NULL));
    for (i = 0; i < size; i ++) {
        a[i] = (rand()%10) + 1;
    }
    print_array(a, size);
    free(a);
    
}

void print_array(int * ar, int size) {
    int i;
    for (i = 0; i < size; i ++) {
        printf("the value is %d\n", ar[i]);
    }
}
