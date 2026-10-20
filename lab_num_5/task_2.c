#include <stdio.h>

int main() {
    char logs[3][3][30]; // 3 log entries, each with 3 fields (username, status, timestamp)
    int uppercase_count = 0;

    printf("Enter 3 CSV log entries (Format: Username,Status,Timestamp):\n");
    for (int i = 0; i < 3; i++) {
        printf("Log %d: ", i + 1);
        scanf(" %29[^,],%29[^,],%29[^\n]", logs[i][0], logs[i][1], logs[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; logs[i][j][k] != '\0'; k++) {
                if (logs[i][j][k] >= 'A' && logs[i][j][k] <= 'Z') {
                    uppercase_count++;
                }
            }
        }
    }

    printf("\nParsed Log Entries:\n");
    for (int i = 0; i < 3; i++) {
        printf("Entry %d -> User: %s | Status: %s | Time: %s\n", 
               i + 1, logs[i][0], logs[i][1], logs[i][2]);
    }
    printf("\nTotal Uppercase Letters across all logs: %d\n", uppercase_count);

    return 0;
}