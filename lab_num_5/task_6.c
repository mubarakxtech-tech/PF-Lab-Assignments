#include <stdio.h>

int main() {
    int shifts[4][3];
    int target_idx;

    printf("Enter initial 3x3 production data (3 shifts per workstation):\n");
    for (int i = 0; i < 3; i++) {
        printf("Workstation %d (3 values): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("\nEnter target row index for emergency insertion (0 to 3): ");
    scanf("%d", &target_idx);

    // Shift existing rows downward
    for (int i = 3; i > target_idx; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    printf("Enter 3 production values for the new row: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &shifts[target_idx][j]);
    }

    printf("\nUpdated 4x3 Production Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}