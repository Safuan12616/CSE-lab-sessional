#include<stdio.h>
/* Date: 22/9/26 If...else condiotion */
int main()
{
    float ssc, hsc, total, amount;
    printf("Enter your SSC and HSC GPA:");
    scanf("%f %f", &ssc, &hsc);
    printf("\nTotal amount for the course:");
    scanf("%f", &amount);
    total = ssc + hsc;
    if (total >= 6.50 && total <7.00)
    {
        amount = amount - amount*30/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 30, amount);
    }
    else if(total >=7.00 && total <7.50)
    {
        amount = amount - amount*40/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 40, amount);
    }
    else if(total >=7.50 && total <8.00)
    {
        amount = amount - amount*50/100;
        printf("Your combined GPA: %f and got wavier: %d.\nYour course fee: %f", total, 50, amount);
    }
    else if(total >=8.00 && total <8.50)
    {
        amount = amount - amount*60/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 60, amount);
    }
    else if(total >=8.50 && total <9.00)
    {
        amount = amount - amount*70/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 70, amount);
    }
    else if(total >=9.00 && total <9.50)
    {
        amount = amount - amount*80/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 80, amount);
    }
    else if(total >=9.50 && total <=10.00)
    {
        amount = amount - amount*90/100;
        printf("Your combined GPA: %f and got wavier: %d\nYour course fee: %f", total, 90, amount);
    }
    else
    {
        printf("Your combined GPA: %f and not eligible for any wavier.\nYour Course fee: %f", total, amount);
    };
    return 0;
}
