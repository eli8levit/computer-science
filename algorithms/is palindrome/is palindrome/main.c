//
//  main.c
//  is palindrome
//
//  Created by Eli Levit on 02/02/2019.
//  Copyright © 2019 Eli Levit. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool check_if_palindrome(int *arr, int size);

int main() {
    int arr[10] = {1,2,3,4,5,5,4,3,2,1};
    bool res;
    res = check_if_palindrome(arr, 10);
    printf("%d\n", res);
    return 0;
}

bool check_if_palindrome(int *arr, int size) {
    bool res = true;
    int left, right;
    left = 0;
    right = size - 1;
    
    while (left <= right && res == true) {
        if (arr[left] == arr[right]) {
            left++;
            right--;
        } else {
            res = false;
        }
    }
    return res;
}
