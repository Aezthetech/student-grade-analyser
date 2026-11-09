# include <stdio.h>
# include <stdbool.h>
int main () {
    bool granted=false;
    int password;
    printf("Enter pin");
    scanf("%d",&password);
    if (password==1234)
    granted=true;
    if (granted)
    printf("Access granted\n");
    else
    printf("Access denied\n");
    return 1;
    int students;
    int scores [30];
    int sum=0;
    printf("Enter number of students:");
    scanf("%d",&students);
    if (students < 1 || students > 30) {
    printf("Number of students must be between 1 and 30.\n");
    return 1;
    }
    for ( int i=0; i<students; i++)  { 
        printf("Enter score for student%d ",i+1);
        scanf("%d",&scores[i]);
        sum +=scores[i];
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
float average = (float)sum / students;
printf("Class average:%.2f\n",average);
    return 0;
}

