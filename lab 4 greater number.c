#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter your numbers:");
    scanf("%d %d %d", &a,&b,&c);

    if (a>b && a>c) {
        printf("%d is greater.\n");
    } else if (b>a && b>c) {
        printf("%d is greater.\n");
    } else if (c>a && c>b) {
        printf("%d is greater.\n");
    };
    return 0;
};
