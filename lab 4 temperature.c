#include<stdio.h>
int main() {
    int temp;
    printf("Enter temperature:");
    scanf("%d",&temp);
    if (temp>=0 && temp<=15) {
        printf("Cold Weather / Low Temperature.\n");
    } else if (temp>15 && temp<=30) {
        printf("Normal Temperature.\n");
    } else if (temp>30) {
        printf("Hot / High Temperature.\n");
    }
    return 0;
}
