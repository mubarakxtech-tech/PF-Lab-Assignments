#include <stdio.h>

int main() {
    float confidence;
    int user_type; // 1 = Authorized, 0 = Unauthorized

    printf("=== Smart Security System ===\n");
    printf("Enter Face-Recognition Confidence (%%): ");
    scanf("%f", &confidence);
    printf("Enter User Type (1 for Authorized, 0 for Unauthorized): ");
    scanf("%d", &user_type);


    if (confidence < 50.0 || user_type == 0) {
        printf("Access Status: Access Denied\n");
    } else if (confidence >= 80.0 && user_type == 1) {
        printf("Access Status: Access Granted\n");
    } else if (confidence >= 50.0 && confidence < 80.0) {
        printf("Access Status: Manual Verification Required\n");
    } else {
        printf("Access Status: Face Recognized (Additional checks needed)\n");
    }

    return 0;
}