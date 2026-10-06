#include<stdio.h>
int main() {
   int arr[20]; // Allocated extra space for insertion
    int size = 8;
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    // Largest and smallest element
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    printf("Largest: %d | Smallest: %d\n", largest, smallest);
    
    // Search for a number
    int search_val, found = 0;
    printf("Enter a number to search: ");
    scanf("%d", &search_val);
    for (int i = 0; i < size; i++) {
        if (arr[i] == search_val) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Number not found.\n");
    
    // Insert new number at specific index
    int ins_idx, ins_val;
    printf("Enter index and value to insert (index value): ");
    scanf("%d %d", &ins_idx, &ins_val);
    if (ins_idx >= 0 && ins_idx <= size) {
        for (int i = size; i > ins_idx; i--) arr[i] = arr[i - 1];
        arr[ins_idx] = ins_val;
        size++;
        printf("Array after insertion: ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }
    
    // Delete element from specific index
    int del_idx;
    printf("Enter index to delete: ");
    scanf("%d", &del_idx);
    if (del_idx >= 0 && del_idx < size) {
        for (int i = del_idx; i < size - 1; i++) arr[i] = arr[i + 1];
        size--;
        printf("Final Array after deletion: ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }
    
    return 0;
}
    