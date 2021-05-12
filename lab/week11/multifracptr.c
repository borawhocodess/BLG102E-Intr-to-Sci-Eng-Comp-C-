#include <stdio.h>

// 1/7 like so
typedef struct {
    int numerator;
    int denominator;
} FRACTION;

void getFraction(FRACTION *pFr) // use scanf to get 2 integers from the end user
{
    printf("Write a fraction in the form of x/y: ");
    scanf("%d/%d", &pFr->numerator, &pFr->denominator);
}

void multiplyFraction(FRACTION *pfr1, FRACTION *pfr2, FRACTION *pRes)
{
    pRes->numerator = pfr1->numerator * pfr2->numerator;
    pRes->denominator = pfr1->denominator * pfr2->denominator;
}

void printFraction(FRACTION *pfr1, FRACTION *pfr2, FRACTION *pres)
{
    printf("\n The result of %d/%d * %d/%d is %d/%d \n", pfr1->numerator, pfr1->denominator, pfr2->numerator, pfr2->denominator, pres->numerator, pres->denominator);
}

int main()
{
    FRACTION fr1;
    FRACTION fr2;
    FRACTION res;
    
    getFraction(&fr1);
    getFraction(&fr2);
    
    multiplyFraction(&fr1, &fr2, &res);
    
    // The result of 1/7 * 1/2 is 1/14
    printFraction(&fr1, &fr2, &res);
   
    return 0;
}

