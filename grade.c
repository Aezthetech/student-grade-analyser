#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int score;
} Student;

void bubbleSortRanks(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].score < students[j + 1].score) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

const char *getGrade(int score) {
    if (score >= 84) return "A";
    else if (score >= 75) return "A-";
    else if (score >= 67) return "B+";
    else if (score >= 60) return "B";
    else if (score >= 53) return "B-";
    else if (score >= 46) return "C+";
    else return "Below direct entry";
}

int main(void) {
    int password;
    printf("Enter pin: ");
    scanf("%d", &password);

    if (password != 1234) {
        printf("Access denied\n");
        return 1;
    }
    printf("Access granted\n");

    int count;
    Student students[30];
    int sum = 0;

    printf("Enter number of students: ");
    scanf("%d", &count);
    if (count < 1 || count > 30) {
        printf("Number of students must be between 1 and 30.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%29s", students[i].name);

        printf("Enter score for %s: ", students[i].name);
        scanf("%d", &students[i].score);

        sum += students[i].score;
        printf("Grade: %s\n", getGrade(students[i].score));
    }

    bubbleSortRanks(students, count);

    printf("\n--- Ranking ---\n");
    int rank = 1;
    for (int i = 0; i < count; i++) {
        if (i > 0 && students[i].score != students[i - 1].score)
            rank = i + 1;
        printf("%d. %s - %d (%s)\n", rank, students[i].name,
               students[i].score, getGrade(students[i].score));
    }

    printf("Class average: %.2f\n", (float)sum / count);
    return 0;
}
