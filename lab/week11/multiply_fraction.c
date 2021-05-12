#include <stdio.h>

// 1/7 like so
typedef struct {
    int numerator;
    int denominator;
} FRACTION;

FRACTION getFraction(void) // use scanf to get 2 integers from the end user
{
    FRACTION fr;
    
    printf("Write a fraction in the form of x/y: ");
    scanf("%d/%d", &fr.numerator, &fr.denominator);
    
    return fr;
}

FRACTION multiplyFraction(FRACTION fr1, FRACTION fr2)
{
    FRACTION res;
    
    res.numerator = fr1.numerator * fr2.numerator;
    res.denominator = fr1.denominator * fr2.denominator;
    
    return res;
}

void printFraction(FRACTION fr1, FRACTION fr2, FRACTION res)
{
    printf("\n The result of %d/%d * %d/%d is %d/%d \n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);
    
    return;
}

int main()
{
    FRACTION fr1;
    FRACTION fr2;
    FRACTION res;
    
    fr1 = getFraction();
    fr2 = getFraction();
    
    res = multiplyFraction(fr1, fr2);
    
    // The result of 1/7 * 1/2 is 1/14
    printFraction(fr1, fr2, res);
   
    return 0;
}

