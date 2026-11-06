# include <stdio.h>
int main () {
    int students;
    int scores [30];
    printf("Enter number of students:");
    scanf("%d",&students);
    if (students < 1 || students > 30) {
    printf("Number of students must be between 1 and 30.\n");
    return 1;
    }
    for ( int i=0; i<students; i++)  { 
        printf("Enter score for student%d ",i+1);
        scanf("%d",&scores[i]);
    if (scores[i]>=84) {
        printf("Grade:A\n");
    }else if (scores[i]>=75) {
        printf("Grade:A-\n");
    }else if (scores[i]>=67) {
        printf("Grade:B+\n");
    }else if (scores[i]>=60) {
        printf("Grade:B\n");
    }else if(scores[i]>=53) {
        printf("Grade:B-\n");
    }else if(scores[i]>=46) {
        printf("Grade:C+\n");
    }else{
        printf("You didn't make the cut for direct entry to University.\n");
    }
}
    return 0;
}

