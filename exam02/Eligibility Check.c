#include <stdio.h>

int main() {
    int score;
    char grade;

    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        grade = 'A';
         
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score < 60) {
        grade = 'F';
    } else {
        printf("Invalid score!\n");
      
    }
 
    printf("Your grade is %c. ", grade);

    if (grade == 'A') {
        printf("Excellent work!\n");
    } else if (grade == 'B') {
        printf("Well done!\n");
    } else if (grade == 'C') {
        printf("Good job!\n");
    } else if (grade == 'D') {
        printf("You passed, but you could do better.\n");
    } else if (grade == 'F') {
        printf("Sorry, you failed.\n");
    }

    return 0;
}
