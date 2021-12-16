#include<stdio.h>

int main(){
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    // it implies that there are 3 arrays that each contain 5 elements

    int *ptr = *marks;
    
    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
            printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
            // scanf("%d", &marks[i][j]);
            scanf("%d",ptr);
            ptr++;
        }
    }

    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, marks[i][j]);
        }
    }

    return 0;
}

