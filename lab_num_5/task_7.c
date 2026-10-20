#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int defective_col;

    printf("Enter 3x4 sensor readings (3 days x 4 sensors):\n");
    for (int i = 0; i < 3; i++) {
        printf("Day %d (4 values): ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &sensor_data[i][j]);
        }
    }

    printf("\nEnter column index of defective sensor to remove (0 to 3): ");
    scanf("%d", &defective_col);

    // Left-shift columns past the target column
    for (int r = 0; r < 3; r++) {
        for (int c = defective_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\nUpdated 3x3 Sensor Data Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%7.2f ", sensor_data[i][j]);
        }
        printf("\n");
    }

    return 0;
}