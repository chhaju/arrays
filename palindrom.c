#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The array is %s palindrome.\n", isPalindrome(arr, n) ? "a" : "not");
    
    return 0;
}
