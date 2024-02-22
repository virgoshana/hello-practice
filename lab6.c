#include <stdio.h>


int numbers;
int low;
int high;
int integer;
int value;

// SLMP Binary Search slide # 9 & 10 use that layout

int search(int numbers[], int low, int high, int value) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (numbers[mid] == value) {
        return mid;
    }
    else if (numbers[mid] > value) {
        return search(numbers, low, mid -1, value);
    }
    else {
        return search(numbers, mid + 1, high, value);
    }
}
int main() {
    
}









