#include<stdio.h>
int main () {
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark < 40) {
        printf("Fail.\n");
    } else if (mark >=40 && mark <=50) {
        printf("Class D.\n");
    } else if (mark >=51 && mark <=55) {
        printf("Class C.\n");
    } else if (mark >=56 && mark <=60) {
        printf("Class C+.\n");
    } else if (mark >=61 && mark <=65) {
        printf("Class B.\n");
    } else if (mark >=66 && mark <=70) {
        printf("Class B+.\n");
    } else if (mark >=71 && mark <=75) {
        printf("Class A-.\n");
    } else if (mark >=76 && mark <=79) {
        printf("Class A.\n");
    } else if (mark >=80) {
        printf("Class A+.\n");
    }
    return 0;
}
