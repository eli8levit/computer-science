//
//  main.c
//  quick sort
//
//  Created by Eli Levit on 02/02/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>

int partition(int *arr, int left, int right);
void quick_sort(int *arr, int first, int last);
void swap(int *a, int *b);
void print(int *arr, int size);

int main() {
    int arr[8] = {5,9,16,3,7,6,2,15};
    quick_sort(arr, 0, 7);
    print(arr, 8);
    return 0;
}

int partition(int *arr, int left, int right) {
    int first = left;
    int pos, pivot = arr[first];
    
    while(left < right) {
        while(arr[right] > pivot) {
            right--;
        }
        while(left < right && arr[left] <= pivot) {
            left++;
        }
        if (left < right) {
            swap(arr + left, arr + right);
        }
    }
    pos = right;
    arr[first] = arr[pos];
    arr[pos] = pivot;
    return pos;
}

void quick_sort(int *arr, int first, int last) {
    int pos;
    if (first < last) {
        pos = partition(arr, first, last);
        quick_sort(arr, first, pos - 1);
        quick_sort(arr, pos + 1, last);
    }
}


void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void print(int *arr, int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }
}
