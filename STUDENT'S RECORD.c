#include <stdio.h>
#include <string.h>

// Define the structure for student record
struct Student {
    char name[100];      // To store the student's name
    int age;             // To store the student's age
    float feeBalance;    // To store the student's fee balance
};

int main() {
    // Declare an array of 5 Student structures
    struct Student students[5];
    
    // Loop to input data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        // Read student's name
        printf("Enter student's name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        // Remove newline character if present in name
        size_t length = strlen(students[i].name);
        if (students[i].name[length - 1] == '\n') {
            students[i].name[length - 1] = '\0';
        }

        // Read student's age
        printf("Enter student's age: ");
        scanf("%d", &students[i].age);

        // Read student's fee balance
        printf("Enter student's fee balance: ");
        scanf("%f", &students[i].feeBalance);
        
        // To consume the leftover newline character after reading a float value
        getchar();
    }

    // Output the details of all 5 students
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Fee Balance: %.2f\n", students[i].feeBalance);
    }

    return 0;
}
