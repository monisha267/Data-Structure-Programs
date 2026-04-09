#include <stdio.h>
int main() {
    int arr[100], n, key, i, found = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i; 
            break;     
        }
    }
    if (found != -1) {
        printf("Element %d found at position %d\n", key, found + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}