//
//  main.c
//  insert sort
//
//  Created by Eli Levit on 20/01/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>

void insert_array_sort(int *arr, int size);
void print(int *arr, int size);


int main() {
    int arr[5] = {2,7,3,1,5};
    insert_array_sort(arr, 5);
    print(arr, 5);
}

void insert_array_sort(int *arr, int size) {
    int i,j,x;
    
    for (i = 0; i < size -1; i ++) {
        x = arr[i + 1];
        j = i;
        while (x < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            arr[j] = x;
            j --;
        }
    }
}

void print(int *arr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }
}


