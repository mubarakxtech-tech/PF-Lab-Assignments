#include <stdio.h>

int main() {
    int category, choice;

    printf("=== Rule-Based AI Chatbot ===\n");
    printf("Select a Conversation Category:\n");
    printf("1. Greeting\n2. Study\n3. Weather\n4. Help\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("1. Hello\n2. How are you\n3. Goodbye\nSelect option: ");
            scanf("%d", &choice);
            if (choice == 1) printf("Chatbot: Hello! How can I help you today?\n");
            else if (choice == 2) printf("Chatbot: I'm just a C program, but I'm doing great!\n");
            else if (choice == 3) printf("Chatbot: Goodbye! Have a wonderful day.\n");
            else printf("Invalid option.\n");
            break;
        case 2:
            printf("1. Programming\n2. Mathematics\n3. AI\nSelect option: ");
            scanf("%d", &choice);
            if (choice == 1) printf("Chatbot: Programming builds logic through structured code.\n");
            else if (choice == 2) printf("Chatbot: Mathematics is foundational for algorithms and calculus.\n");
            else if (choice == 3) printf("Chatbot: AI simulates human intelligence using computational models.\n");
            else printf("Invalid option.\n");
            break;
        case 3:
            printf("1. Today\n2. Tomorrow\n3. Forecast\nSelect option: ");
            scanf("%d", &choice);
            if (choice == 1) printf("Chatbot: Today's weather is clear and pleasant.\n");
            else if (choice == 2) printf("Chatbot: Tomorrow will be warm with moderate breeze.\n");
            else if (choice == 3) printf("Chatbot: 3-day forecast shows stable weather conditions.\n");
            else printf("Invalid option.\n");
            break;
        case 4:
            printf("1. About Chatbot\n2. Commands\n3. Exit\nSelect option: ");
            scanf("%d", &choice);
            if (choice == 1) printf("Chatbot: I am an interactive rule-based assistant built in C.\n");
            else if (choice == 2) printf("Chatbot: Use number keys to navigate through menus.\n");
            else if (choice == 3) printf("Chatbot: Exiting session. Goodbye!\n");
            else printf("Invalid option.\n");
            break;
        default:
            printf("Invalid category selection.\n");
    }

    return 0;
}