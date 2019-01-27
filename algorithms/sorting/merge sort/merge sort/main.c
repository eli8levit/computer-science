//
//  main.c
//  merge sort
//
//  Created by Eli Levit on 22/01/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void merge(int *arr1, int first, int middle, int last);
void merge_sort(int *arr, int first, int last);
void print(int *arr, int size);

int main() {
    int arr[10] = {1,3,28,9,4,7,2,28,11,14};
    merge_sort(arr, 0, 9);
    print(arr, 10);
}

void merge_sort(int *arr, int first, int last) {
    int middle;
    if (first < last) {
        middle = (first + last) / 2;
        merge_sort(arr, first, middle);
        merge_sort(arr, middle + 1, last);
        merge(arr, first, middle, last);
    }
}

void merge(int *arr, int first, int middle, int last) {
    int* temp_array = (int*)(calloc(last - first + 1, sizeof(int)));
    int i = first, j = middle + 1, c = 0;
    
    while (i <= middle && j <= last) {
        if (arr[i] < arr[j]) {
            temp_array[c++] = arr[i++];
        } else {
            temp_array[c++] = arr[j++];
        }
    }
    
    while (i <= middle) {
        temp_array[c++] = arr[i++];
    }
    
    while (j <= last) {
        temp_array[c++] = arr[j++];
    }
    
    for (i=first, c=0; i <= last; i++, c++) {
        arr[i] = temp_array[c];
    }
 
    free(temp_array);
}


void print(int *arr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }
}
