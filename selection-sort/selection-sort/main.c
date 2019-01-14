//
//  main.c
//  selection-sort
//
//  Created by Eli Levit on 14/01/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>

void bubble_array_sort(int *arr, int size);
void print(int *arr, int size);


int main() {
    int arr[10] = {7,5,4,3,1,5,9,5,8,0};
    bubble_array_sort(arr, 10);
    print(arr, 10);
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void bubble_array_sort(int *arr, int size) {
    int i, j, lim;
    for (i=0; i < size -1 ; i++) {
        lim = size - i - 1;
        for (j=0; j < lim; j ++) {
            if (arr[j] > arr[lim]) {
                swap(arr + j, arr + lim);
            }
        }
    }
}

void print(int *arr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }
}
