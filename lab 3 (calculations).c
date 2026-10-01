#include<stdio.h>
/* Date: 29/09/2026*/
int main() {
    int m=7,n=3,x,y;
    x=m++*--n;
    printf("M=%d N=%d X=%d\n", m,n,x);
    y=++m + n--;
    printf("M=%d N=%d Y=%d\n",m,n,y);
    printf("M/N=%d\n",m/n);
    printf("M%%N=%d\n",m%n);
    m -= n;
    printf("Updated M=%d\n",m);
    printf("%d\n",(x>y)?(x-y):(y-x));
    printf("%d\n",(m==n)?1:0);
    return 0;
}
